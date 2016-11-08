import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL

/**
  * Created by vasya on 09.11.2016.
  */
case class CreateHeaderGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    val filename = genData.createHeaderPath
    val pw = new PrintWriter(new File(filename))

    pw.write(
      s"""#pragma once
          |
          |${processDecls(interfaces)}
      """.stripMargin)

    pw.close()
  }

  private def processDecls(interfaces: List[Interface]): String = {
    interfaces
      .map(i => s"${i.name} *create_wrapper(${i.name} *impl);")
      .mkString(s"$EOL")
  }

}
