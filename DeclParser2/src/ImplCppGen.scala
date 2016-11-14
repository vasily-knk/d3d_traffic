import java.io.{File, PrintWriter}

/**
  * Created by vasya on 09.11.2016.
  */
case class ImplCppGen(dir: String)  {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    interfaces.foreach(processInterface)
  }

  private def processInterface(i: Interface): Unit = {
    val filename = genData.getImplCppPath(i.name)

    val file = new File(filename)
    if (file.exists())
      return

    val pw = new PrintWriter(file)

    val baseName = genData.getBaseName(i.name)
    val implName = genData.getImplName(i.name)

    pw.write(
      s"""#include "stdafx.h"
        |#include "../wrappers.h"
        |
        |#include "${genData.getImplHeaderFilename(i.name)}"
        |
        |${i.name} *create_wrapper_inner(${i.name} *impl)
        |{
        |    return new $implName(impl);
        |}
        |
        |$implName::$implName(${i.name} *impl)
        |    : $baseName(impl)
        |{
        |
        |}
      """.stripMargin)

    pw.close()
  }
}
