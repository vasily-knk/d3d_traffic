import java.io.{File, PrintWriter}

import scala.compat.Platform._

/**
  * Created by vasya on 09.11.2016.
  */
case class CreateCppGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    val filename = genData.createCppPath
    val pw = new PrintWriter(new File(filename))

    pw.write(
      s"""#pragma once
          |
          |#include "${genData.createHeaderFilename}"
          |
          |${getIncludes(interfaces)}
          |
          |${getDefs(interfaces)}
          |
      """.stripMargin)

    pw.close()

  }

  private def getIncludes(interfaces: List[Interface]): String = {
    interfaces
      .map(i => s"""#include "${genData.getImplHeaderFilename(i.name)}" """)
      .mkString(s"$EOL")
  }

  private def getDefs(interfaces: List[Interface]): String = {
    interfaces
      .map(getDef)
      .mkString(s"$EOL")
  }

  private def getDef(i: Interface): String = {
    s"""${i.name} *create_wrapper(${i.name} *impl)
       |{
       |    return new ${genData.getImplName(i.name)}(impl);
       |}
       |
     """.stripMargin
  }
}
