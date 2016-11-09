import java.io.{File, PrintWriter}

import scala.compat.Platform._

/**
  * Created by vasya on 09.11.2016.
  */
case class WrapperGen(dir: String) {
  val genData = new GenData(dir)

  def generate(interfaces: List[Interface]): Unit = {
    val filename = genData.wrapperPath
    val pw = new PrintWriter(new File(filename))

    pw.write(
      s"""#pragma once
          |
          |template<typename T>
          |struct wrapper;
          |
          |template<typename T>
          |using wrapper_t = wrapper<T>::type;
          |
          |${processForwards(interfaces)}
          |
          |${processWrappers(interfaces)}
      """.stripMargin)

    pw.close()
  }

  private def processForwards(interfaces: List[Interface]): String = {
    def processInterface(i: Interface) = {
      val implName = genData.getImplName(i.name)
      s"struct $implName;".stripMargin
    }

    interfaces
      .map(processInterface)
      .mkString(s"$EOL")
  }

  private def processWrappers(interfaces: List[Interface]): String = {
    def processInterface(i: Interface) = {
      val implName = genData.getImplName(i.name)
      s"""|template<>
          |struct wrapper<${i.name}>
          |{
          |    typedef $implName type;
          |};
       """.stripMargin
    }

    interfaces
      .map(processInterface)
      .mkString(s"$EOL")
  }
}
