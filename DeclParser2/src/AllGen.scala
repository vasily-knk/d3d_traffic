/**
  * Created by vasya on 09.11.2016.
  */
case class AllGen(dir: String, generateImpl: Boolean) {

  def generate(interfaces: List[Interface]): Unit = {
    new BaseHeaderGen(dir).generate(interfaces)
    new BaseCppGen(dir).generate(interfaces)

    new CreateHeaderGen(dir).generate(interfaces)
    new CreateCppGen(dir).generate(interfaces)
    new WrapperGen(dir).generate(interfaces)

    if (generateImpl) {
      new ImplHeaderGen(dir).generate(interfaces)
      new ImplCppGen(dir).generate(interfaces)
    }
  }
}
