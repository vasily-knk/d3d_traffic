import java.io.{File, PrintWriter}

import scala.compat.Platform._

/**
  * Created by vasya on 14.11.2016.
  */
case class GuidsGen(dir: String) {
  val genData = new GenData(dir)
  def generate(interfaces: List[Interface]): Unit = {
    val filename = genData.guidsCppPath
    val pw = new PrintWriter(new File(filename))

    pw.println(
      s"""#include "stdafx.h"
          |#include "../guids.h"
          |#include "../wrappers.h"
          |
          |create_wrapper_f creator_by_guid(REFIID guid)
          |{
          |    static const guid_map_t<create_wrapper_f> mapping = {
          |        ${genLambdas(interfaces)}
          |    };
          |
          |    auto it = mapping.find(guid);
          |    if (it == mapping.end())
          |        return nullptr;
          |
          |    return it->second;
          |}
      """.stripMargin)

    pw.close()
  }

  private def genLambdas(interfaces: List[Interface]): String = {
    def genLambda(i: Interface): String = {
      val lmbd = s"[](IUnknown *impl) { return create_wrapper(static_cast<${i.name} *>(impl)); }"
      s"{IID_${i.name}, $lmbd },"
    }

    interfaces
      .map(genLambda)
      .mkString(s"$EOL        ")
  }

}
