import scala.io.Source

/**
  * Created by vasya on 07.11.2016.
  */
object Regexes extends App {
  def stripComments(s: String) = {
    val pattern = "/\\*.*\\*/".r
    pattern.replaceAllIn(s, "")
  }

  val pattern = "MIDL_INTERFACE[^\\}]+\\}".r

  val srcText = Source.fromFile("d3d11.h").mkString

  val p = new ParserImpl

  val ifs = (pattern findAllIn srcText)
    .map(stripComments)
    .map(p.parse1)
    .toList

  val dir = "out_files"

  new BaseFwdGen(dir).generate(ifs)
  new BaseHeaderGen(dir).generate(ifs)
  new BaseCppGen(dir).generate(ifs)
}
