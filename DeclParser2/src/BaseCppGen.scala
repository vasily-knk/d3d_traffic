import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL

/**
  * Created by vasya on 08.11.2016.
  */
case class BaseCppGen(dir: String) {

  def generate(interfaces: List[Interface]): Unit = {
    interfaces.foreach(processInterface)
  }

  private def getFilename(i: Interface) = {
    new File(dir, getBaseName(i.name) + ".cpp").getPath
  }

  private def getBaseName(name: String) = {
    "base_" + name
  }

  private def getImplName(name: String) = {
    "impl_" + name
  }

  private def getMethod(i: Interface, m: Method): String = {
    val argNames = m.args.map(m => m.name).mkString(", ")

    s"""${m.retType} ${getBaseName(i.name)}::${m.name}(${m.args.mkString(", ")})
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
    val filename = getFilename(i)

    val pw = new PrintWriter(new File(filename))

    val baseName = getBaseName(i.name)
    val implName = getImplName(i.name)

    pw.println(
      s"""#include "stdafx.h"
        |
        |#include "$baseName.h"
        |
        |${i.name} *create_wrapper_${i.name}(${i.name} *impl)
        |{
        |    return new $implName(impl);
        |}
        |
        |$baseName::$baseName(${i.name} *impl)
        |    : impl_(impl)
        |{
        |
        |}
        |
        |${getBody(i)}
      """.stripMargin)

    pw.close()
  }
}
