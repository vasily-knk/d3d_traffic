import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL


/**
  * Created by vasya on 08.11.2016.
  */
case class BaseHeaderGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    interfaces.foreach(processInterface)
  }

  private def getBody(i: Interface): String = {
    val newline = s"$EOL    "

    def methodDecl(m: Method) = {
      s"${m.retType} STDMETHODCALLTYPE ${m.name}(${m.args.mkString(", ")})"
    }

    i.methods.map(m => s"${methodDecl(m)} override;").mkString(newline)
  }

  private def processInterface(i: Interface): Unit = {
    val filename = genData.getBaseHeaderPath(i.name)

    val pw = new PrintWriter(new File(filename))

    val baseName = genData.getBaseName(i.name)
    val parentName = genData.getImplName(i.parentName)

    pw.write(
      s"""#pragma once
        |
        |#include "${genData.getImplHeaderFilename(i.parentName)}"
        |
        |struct $baseName
        |    : $parentName
        |    , ${i.name}
        |{
        |    explicit $baseName(${i.name} *impl);
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
