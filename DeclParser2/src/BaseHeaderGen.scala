import java.io.{File, PrintWriter}
import scala.compat.Platform.EOL


/**
  * Created by vasya on 08.11.2016.
  */
case class BaseHeaderGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    val parentWalker = new ParentWalker(interfaces)

    interfaces.foreach(i => processInterface(i, parentWalker))
  }

  private def methodDecl(m: Method) = {
    s"${m.retType} STDMETHODCALLTYPE ${m.name}(${m.args.mkString(", ")}) override;"
  }

  private def getBody(i: Interface): String = {
    i.methods.map(methodDecl).mkString(s"$EOL    ")
  }

  private def parentMethodsBody(i: Interface, parentWalker: ParentWalker): String = {
    val parentMethods = parentWalker.getParentMethods(i)

    parentMethods.map(methodDecl).mkString(s"$EOL    ")
  }

  private def processInterface(i: Interface, parentWalker: ParentWalker): Unit = {
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
        |    // parent methods
        |public:
        |    ${parentMethodsBody(i, parentWalker)}
        |
        |public:
        |    ${i.name} *impl() const;
        |
        |private:
        |    ${i.name} *impl_;
        |};
      """.stripMargin)

    pw.close()
  }
}
