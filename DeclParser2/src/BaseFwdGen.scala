import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL

/**
  * Created by vasya on 08.11.2016.
  */
case class BaseFwdGen(dir: String) {
  val filename = new File(dir, "base_fwd.h").getPath

  private def getBaseName(name: String) = {
    "base_" + name
  }

  def generate(interfaces: List[Interface]): Unit = {
    val pw = new PrintWriter(new File(filename))

    val body = interfaces
      .map(i => s"struct ${getBaseName(i.name)};")
      .mkString(s"$EOL")

    pw.write(
      s"""#pragma once
        |
        |$body
      """.stripMargin)

    pw.close()
  }
}
