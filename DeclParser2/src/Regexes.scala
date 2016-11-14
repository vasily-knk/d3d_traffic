import scala.collection.convert.WrapAsScala
import scala.io.Source

/**
  * Created by vasya on 07.11.2016.
  */
object Regexes extends App {
  def stripComments(s: String) = {
    val pattern = "/\\*.*\\*/".r
    pattern.replaceAllIn(s, "")
  }

  def parseFile(filename: String) = {
    val pattern = "MIDL_INTERFACE[^\\}]+\\}".r
    val srcText = Source.fromFile(filename).mkString
    val p = new ParserImpl
    val ifs = (pattern findAllIn srcText)
      .map(stripComments)
      .map(p.parse1)
      .toList

    ifs
  }

  val files = List("d3d11.h", "iunknown.h")
  val ifs = files.flatMap(parseFile)
  val dir = "../proxy_d3d11/impl"
  //val dir = "out_files"

  val generateImpls = false

  new AllGen(dir, generateImpls).generate(ifs)
}
