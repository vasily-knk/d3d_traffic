import java.io.{File, PrintWriter}

import scala.annotation.tailrec
import scala.compat.Platform.EOL

/**
  * Created by vasya on 08.11.2016.
  */
case class BaseCppGen(dir: String) {
  val genData = new GenData(dir)

  type InterfacesMap = Map[String, Interface]

  def generate(interfaces: List[Interface]): Unit = {
    val parentWalker = new ParentWalker(interfaces)

    interfaces.foreach(i => processInterface(i, parentWalker))
  }

  private def getMethodSig(i: Interface, m: Method): String = {
    s"${m.retType} ${genData.getBaseName(i.name)}::${m.name}(${m.args.mkString(", ")})"
  }

  private def getMethod(i: Interface, m: Method): String = {
    val argNames = m.args.map(m => m.name).mkString(", ")

    s"""${getMethodSig(i, m)}
       |{
       |    return impl_->${m.name}($argNames);
       |}
     """.stripMargin
  }

  private def getParentMethod(i: Interface, m: Method): String = {
    val argNames = m.args.map(m => m.name).mkString(", ")
    val parentName = genData.getImplName(i.parentName)

    s"""${getMethodSig(i, m)}
       |{
       |    return $parentName::${m.name}($argNames);
       |}
     """.stripMargin
  }


  private def getBody(i: Interface): String = {
    i.methods
      .map(m => getMethod(i, m))
      .mkString(s"$EOL")
  }

  private def parentMethodsBody(i: Interface, parentWalker: ParentWalker): String = {
    val parentMethods = parentWalker.getParentMethods(i)

    parentMethods
      .map(m => getParentMethod(i, m))
      .mkString(s"$EOL")
  }

  private def processInterface(i: Interface, parentWalker: ParentWalker): Unit = {
    val filename = genData.getBaseCppPath(i.name)

    val pw = new PrintWriter(new File(filename))

    val baseName = genData.getBaseName(i.name)
    val parentName = genData.getImplName(i.parentName)

    pw.println(
      s"""#include "stdafx.h"
        |
        |#include "$baseName.h"
        |
        |$baseName::$baseName(${i.name} *impl)
        |    : $parentName(impl)
        |    , impl_(impl)
        |{
        |
        |}
        |
        |${getBody(i)}
        |
        |${parentMethodsBody(i, parentWalker)}
        |
        |${i.name} *$baseName::impl() const
        |{
        |    return impl_;
        |}
      """.stripMargin)

    pw.close()
  }
}
