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
          |${processWraps(interfaces)}
          |
          |${processUnwraps(interfaces)}
          |
          |template<typename T>
          |T *create_wrapper(T *impl)
          |{
          |    return create_wrapper_inner(impl);
          |}
          |
          |template<typename T>
          |T *unwrap(T *wrapper)
          |{
          |    if (!wrapper)
          |        return nullptr;
          |
          |    return unwrap_inner(wrapper);
          |}
          |
          |template<typename T>
          |T *wrap(T *impl)
          |{
          |    if (!impl)
          |        return nullptr;
          |
          |    return create_wrapper_inner(impl);
          |}
          |
          |""".stripMargin)

    pw.close()
  }

  private def processWraps(interfaces: List[Interface]): String = {
    interfaces
      .map(i => s"${i.name} *create_wrapper_inner(${i.name} *impl);")
      .mkString(s"$EOL")
  }

  private def processUnwraps(interfaces: List[Interface]): String = {
    interfaces
      .map(i => s"${i.name} *unwrap_inner(${i.name} *wrapper);")
      .mkString(s"$EOL")
  }
}
