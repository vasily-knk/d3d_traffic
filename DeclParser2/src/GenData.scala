import java.io.File

/**
  * Created by vasya on 09.11.2016.
  */
case class GenData(dir: String) {
  def getBaseName(name: String) = {
    "base_" + name
  }

  def getImplName(name: String) = {
    "impl_" + name
  }

  def getBaseHeaderFilename(name: String) = {
    getBaseName(name) + ".h"
  }

  def getBaseCppFilename(name: String) = {
    getBaseName(name) + ".cpp"
  }

  def getImplHeaderFilename(name: String) = {
    getImplName(name) + ".h"
  }

  def getImplCppFilename(name: String) = {
    getImplName(name) + ".cpp"
  }

  def getBaseHeaderPath(name: String) = {
    getFullPath(getBaseHeaderFilename(name))
  }

  def getBaseCppPath(name: String) = {
    getFullPath(getBaseCppFilename(name))
  }

  def getImplHeaderPath(name: String) = {
    getFullPath(getImplHeaderFilename(name))
  }

  def getImplCppPath(name: String) = {
    getFullPath(getImplCppFilename(name))
  }

  private def getFullPath(name: String) = {
    new File(dir, name).getPath
  }
}
