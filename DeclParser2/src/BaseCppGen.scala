import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL

/**
  * Created by vasya on 08.11.2016.
  */
case class BaseCppGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    interfaces.foreach(processInterface)
  }

  private def getMethod(i: Interface, m: Method): String = {
    val argNames = m.args.map(m => m.name).mkString(", ")

    s"""${m.retType} ${genData.getBaseName(i.name)}::${m.name}(${m.args.mkString(", ")})
       |{
       |    return impl_->${m.name}($argNames);
       |}
     """.stripMargin
  }

  private def getBody(i: Interface): String = {
    i.methods
      .map(m => getMethod(i, m))
      .mkString(s"$EOL")
  }

  private def processInterface(i: Interface): Unit = {
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
      """.stripMargin)

    pw.close()
  }
}
