#****************************************************************************
#* pkginfo.py
#*
#* Copyright 2023 Matthew Ballance and Contributors
#*
#* Licensed under the Apache License, Version 2.0 (the "License"); you may 
#* not use this file except in compliance with the License.  
#* You may obtain a copy of the License at:
#*
#*   http://www.apache.org/licenses/LICENSE-2.0
#*
#* Unless required by applicable law or agreed to in writing, software 
#* distributed under the License is distributed on an "AS IS" BASIS, 
#* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  
#* See the License for the specific language governing permissions and 
#* limitations under the License.
#*
#* Created on:
#*     Author: 
#*
#****************************************************************************
import os
import sys
import sysconfig
import ivpm

class PkgInfo(ivpm.PkgInfo):

    def __init__(self):
        super().__init__("pyhdl-call-if")
        pass

    def getDeps(self):
        return ["pyhdl-pi-if"]

    def getPaths(self, kind):
        if kind == "lib-dirs":
            pkg_dir = os.path.dirname(os.path.abspath(__file__))
            return [os.path.join(pkg_dir, "share")]
        else:
            return []
        
    def getLibDirs(self, kind=None):
        if kind is not None:
            return [sysconfig.get_config_var("LIBDIR")]

    # def getLibs(self, kind=None):
    #     if kind is not None:
    #         pkg_dir = os.path.dirname(os.path.abspath(__file__))

    #         lib = None
    #         for f in os.listdir(pkg_dir):
    #             if f.endswith(self.dllext) and f.startswith("entry"):
    #                 lib = os.path.join(pkg_dir, f)
    #                 break

    #         if lib is None:
    #             raise Exception("Failed to find pyhdl-pi-if library")

    #         lib_filename = os.path.dirname(lib) + "/lib" + os.path.basename(lib)            
    #         print("lib: \"%s\"" % lib)

    #         exe_dir = os.path.dirname(sys.executable)
    #         python_dir = os.path.dirname(exe_dir)
    #         python_dir = sysconfig.get_config_var("installed_platbase")
    #         python_libdir = os.path.join(python_dir, 'lib')

    #         return [
    #             lib_filename,
    #             os.path.join(python_libdir, sysconfig.get_config_var("LDLIBRARY"))]

