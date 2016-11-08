/**
  * Created by vasya on 09.11.2016.
  */
case class ParentWalker(interfaces: List[Interface]) {
  val ifsMap = interfaces.map(i => i.name -> i).toMap

  def getParentMethods(i: Interface) = {
    recGetMethods(i.parentName)
  }

  private def recGetMethods(name: String): List[Method] = {
    name match {
      case "ROOT" => List()
      case _ =>
        val iface = ifsMap(name)
        iface.methods ++ recGetMethods(iface.parentName)
    }
  }
}
