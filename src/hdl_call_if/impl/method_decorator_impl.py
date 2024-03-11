#****************************************************************************
#* method_decorator_impl.py
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
from .method_def import MethodDef, MethodKind

class MethodDecoratorImpl(object):

    def __init__(self, kind : MethodKind, args=None, kwargs=None):
        self._kind = kind
        self._args = args
        self._kwargs = kwargs

    def __call__(self, T):
        md = MethodDef(self._kind, T.__name__, None, [])
        Ctor.inst().addMethodDef(md)

