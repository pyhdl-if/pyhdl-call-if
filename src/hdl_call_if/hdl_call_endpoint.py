#****************************************************************************
#* hdl_call_endpoint.py
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

class HdlCallEndpoint(object):

    def __init__(self, name):
        self._name = name
        self._backend = None

    @property
    def name(self):
        return self._name
    
    @property
    def backend(self):
        from hdl_pi_if.backend import Backend
        if self._backend is None:
            self._backend = Backend.inst()
        return self._backend
    
    def idle(self):
        be = self.backend
    
    



