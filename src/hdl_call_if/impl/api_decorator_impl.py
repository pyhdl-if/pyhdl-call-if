#****************************************************************************
#* api_decorator_impl.py
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
from .ctor import Ctor
from .api_def import ApiDef
from .api_def_rgy import ApiDefRgy

class ApiDecoratorImpl(object):

    def __init__(self, args=None, kwargs=None):
        pass

    def __call__(self, T):
        ctor = Ctor.inst()
        rgy = ApiDefRgy.inst()

        ad = ApiDef(T.__qualname__, ctor.getMethodDefs())
        rgy.addApiDef(ad)

        return T


