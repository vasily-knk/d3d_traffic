/**
  * Created by vasya on 09.11.2016.
  */
case class AllGen(dir: String, impls: Set[String]) {

  def generate(interfaces: List[Interface]): Unit = {
    new BaseHeaderGen(dir).generate(interfaces)
    new BaseCppGen(dir, impls).generate(interfaces)

    new CreateHeaderGen(dir).generate(interfaces)
    // new WrapperGen(dir).generate(interfaces)
    new GuidsGen(dir).generate(interfaces)

//    if (generateImpl) {
//      new ImplHeaderGen(dir).generate(interfaces)
//      new ImplCppGen(dir).generate(interfaces)
//    }
  }
}
