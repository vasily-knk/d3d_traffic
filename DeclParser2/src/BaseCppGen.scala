import java.io.{File, PrintWriter}

import scala.annotation.tailrec
import scala.compat.Platform.EOL

/**
  * Created by vasya on 08.11.2016.
  */
case class BaseCppGen(dir: String, impls: Set[String]) {
  val genData = new GenData(dir)
  var ifsNames: Set[String] = null

  type InterfacesMap = Map[String, Interface]

  def generate(interfaces: List[Interface]): Unit = {
    val parentWalker = new ParentWalker(interfaces)
    ifsNames = interfaces.map(i => i.name).toSet

    interfaces.foreach(i => processInterface(i, parentWalker))
  }

  private def getMethodSig(i: Interface, m: Method): String = {
    s"${m.retType} ${genData.getBaseName(i.name)}::${m.name}(${m.args.mkString(", ")})"
  }

  private def getMethod(i: Interface, m: Method): String = {
    val argNames = m.args.map(m => m.name).mkString(", ")

    val (storeResult, returnResult) = m.retType match {
      case Type("void", false, List()) => ("", "")
      case _ => ("auto result_ = ", "return result_;")
    }

    s"""${getMethodSig(i, m)}
       |{
       |    ${unwrapArgs(m.args)}
       |    ${storeResult}impl_->${m.name}($argNames);
       |    ${wrapArgs(m.args)}
       |    $returnResult
       |}
     """.stripMargin
  }

  private def getParentMethod(i: Interface, m: Method): String = {
    val argNames = m.args.map(m => m.name).mkString(", ")
    val parentName = genData.getImplName(i.parentName)

    s"""${getMethodSig(i, m)}
       |{
       |    return parent_base_->${m.name}($argNames);
       |}
     """.stripMargin
  }


  private def getBody(i: Interface): String = {
    i.methods
      .map(m => getMethod(i, m))
      .mkString(s"$EOL")
  }

  private def parentMethodsBody(i: Interface, parentWalker: ParentWalker): String = {
    val parentMethods = parentWalker.getParentMethods(i)

    parentMethods
      .map(m => getParentMethod(i, m))
      .mkString(s"$EOL")
  }

  private def processInterface(i: Interface, parentWalker: ParentWalker): Unit = {
    val filename = genData.getBaseCppPath(i.name)

    val pw = new PrintWriter(new File(filename))

    val baseName = genData.getBaseName(i.name)
    val parentName = genData.getImplName(i.parentName)

    val createWrapperInner = if (!impls(i.name)) {
      s"""${i.name} *create_wrapper_inner(${i.name} *impl)
          |{
          |    return new $baseName(impl);
          |}
       """.stripMargin
    } else {
      ""
    }

    pw.println(
      s"""#include "stdafx.h"
        |
        |#include "$baseName.h"
        |#include "../wrappers.h"
        |
        |${i.name} *unwrap_inner(${i.name} *wrapper)
        |{
        |    auto *cast_wrapper = static_cast<$baseName *>(wrapper);
        |    return cast_wrapper->impl();
        |}
        |
        |${createWrapperInner}
        |
        |$baseName::$baseName(${i.name} *impl)
        |    : impl_(impl)
        |    , parent_base_(create_wrapper<${i.parentName}>(impl))
        |{
        |
        |}
        |
        |${getBody(i)}
        |
        |${parentMethodsBody(i, parentWalker)}
        |
        |${i.name} *$baseName::impl() const
        |{
        |    return impl_;
        |}
      """.stripMargin)

    pw.close()
  }

  trait WrapStrategy
  case class Wrap() extends WrapStrategy
  case class Unwrap() extends WrapStrategy
  case class WrapArray(countStr: String) extends WrapStrategy
  case class UnwrapArray(countStr: String) extends WrapStrategy

  def stripArg(a: Arg): WrapStrategy = a match {
    case Arg(_, Type(_, _, ptrs), Some(ann), None) => ptrs match {
      // type **
      case List(Ptr(false), Ptr(false)) => ann match {
        case Annotation("_Out_", None) => Wrap()
        case Annotation("_Out_opt_", None) => Wrap()
        case Annotation("_Outptr_", None) => Wrap()
        case Annotation("_COM_Outptr_", None) => Wrap()
        case Annotation("_Outptr_result_maybenull_", None) => Wrap()
        case Annotation("_Outptr_opt_result_maybenull_", None) => Wrap()
        case Annotation("_COM_Outptr_opt_", None) => Wrap()
        case Annotation("_Out_writes_opt_", Some(count)) => WrapArray(count)
      }

      // type *const *
      case List(Ptr(true), Ptr(false)) => ann match {
        case Annotation("_In_reads_opt_", Some(count)) => UnwrapArray(count)
      }

      // type (const) *
      case List(Ptr(_)) => ann match {
        case Annotation("_In_opt_", None) => Unwrap()
        case Annotation("_In_", None) => Unwrap()
      }
    }
  }

  private def wrapArgs(args: List[Arg]) = {
    def wrapArg(a: Arg): Option[String] = stripArg(a) match {
      case Wrap()           => Some(s"if (${a.name} != nullptr) *${a.name} = wrap(*${a.name});")
      case WrapArray(count) => Some(s"wrap_array(${a.name}, $count);")
      case _ => None
    }

    args
      .filter(a => ifsNames(a.argType.name))
      .flatMap(wrapArg)
      .mkString(s"$EOL    ")
  }

  private def unwrapArgs(args: List[Arg]) = {
    def unwrapArg(a: Arg): Option[String] = stripArg(a) match {
      case Unwrap()           => Some(s"${a.name} = unwrap(${a.name});")
      case UnwrapArray(count) => Some(s"auto ${a.name}_unwrapped = unwrap_array(${a.name}, $count); ${a.name} = ${a.name}_unwrapped.data();")
      case _ => None
    }
    args
      .filter(a => ifsNames(a.argType.name))
      .flatMap(unwrapArg)
      .mkString(s"$EOL    ")

  }
}
