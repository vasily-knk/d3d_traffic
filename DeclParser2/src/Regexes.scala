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
  val dir = "../test_app/impl"
  //val dir = "out_files"

  val generateImpls = true

  //new AllGen(dir, generateImpls).generate(ifs)

  val ifsNames = ifs.map(i => i.name).toSet

  def stripArg(a: Arg) = {
    def stripType(t: Type) = {
      Type("type", t.isConst, t.ptrs)
    }
    def stripAnn(ann: Annotation) = {
      Annotation(ann.name, None)
    }

    Arg("", stripType(a.argType), a.annotation.map(stripAnn), a.arraySize)
  }



  val iArgs = ifs
    .flatMap(i => i.methods)
    .flatMap(m => m.args)
    .filter(a => ifsNames(a.argType.name))
    .map(stripArg)
    .distinct

  iArgs.foreach(a => println(a + ": " + a.annotation))

}
