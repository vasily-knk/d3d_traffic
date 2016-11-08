import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL


/**
  * Created by vasya on 08.11.2016.
  */
case class BaseHeaderGen(dir: String) {

  def generate(interfaces: List[Interface]): Unit = {
    interfaces.foreach(processInterface)
  }

  private def getFilename(i: Interface) = {
    new File(dir, getBaseName(i.name) + ".h").getPath
  }

  private def getBaseName(name: String) = {
    "base_" + name
  }

  private def getBody(i: Interface): String = {
    val newline = s"$EOL    "

    def methodDecl(m: Method) = {
      s"${m.retType} STDMETHODCALLTYPE ${m.name}(${m.args.mkString(", ")})"
    }

    i.methods.map(m => s"${methodDecl(m)} override;").mkString(newline)
  }

  private def processInterface(i: Interface): Unit = {
    val filename = getFilename(i)

    val pw = new PrintWriter(new File(filename))

    val baseName = getBaseName(i.name)
    val parentName: String = getBaseName(i.parentName)

    pw.write(
      s"""#pragma once
        |
        |struct $baseName
        |    : $parentName
        |    , ${i.name}
        |{
        |    $baseName(${i.name} *impl);
        |
        |    ${getBody(i)}
        |
        |private:
        |    ${i.name} *impl_;
        |};
      """.stripMargin)

    pw.close()
  }
}
