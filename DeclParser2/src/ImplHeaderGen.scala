import java.io.{File, PrintWriter}

/**
  * Created by vasya on 09.11.2016.
  */
case class ImplHeaderGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    interfaces.foreach(processInterface)
  }

  private def processInterface(i: Interface): Unit = {
    val filename = genData.getImplHeaderPath(i.name)

    val file = new File(filename)
    if (file.exists())
      return

    val pw = new PrintWriter(file)

    val baseName = genData.getBaseName(i.name)
    val implName = genData.getImplName(i.name)

    pw.write(
      s"""#pragma once
        |
        |#include "${genData.getBaseHeaderFilename(i.name)}"
        |
        |struct $implName
        |    : $baseName
        |{
        |    explicit $implName(${i.name} *impl);
        |};
      """.stripMargin)

    pw.close()
  }
}
