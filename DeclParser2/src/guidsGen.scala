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
          |IUnknown *wrap_by_guid(IUnknown *impl, REFIID guid)
          |{
          |    static const guid_map_t<wrap_f> mapping = {
          |        ${genLambdas(interfaces)}
          |    };
          |
          |    auto it = mapping.find(guid);
          |    if (it == mapping.end())
          |        return impl;
          |
          |    return it->second(impl);
          |}
      """.stripMargin)

    pw.close()
  }

  private def genLambdas(interfaces: List[Interface]): String = {
    def genLambda(i: Interface): String = {
      val lmbd = s"[](IUnknown *p) { return wrap(static_cast<${i.name} *>(p)); }"
      s"{IID_${i.name}, $lmbd},"
    }

    interfaces
      .map(genLambda)
      .mkString(s"$EOL        ")
  }

}
