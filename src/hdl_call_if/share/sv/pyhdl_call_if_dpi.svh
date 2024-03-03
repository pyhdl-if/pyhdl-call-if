/**
 * hdl_call_if_dpi.svh
 *
 * Copyright 2024 Matthew Ballance and Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may 
 * not use this file except in compliance with the License.  
 * You may obtain a copy of the License at:
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  
 * See the License for the specific language governing permissions and 
 * limitations under the License.
 *
 * Created on:
 *     Author: 
 */

typedef chandle PyObject;

import "DPI-C" context function void Py_Initialize();
import "DPI-C" context function PyObject PyImport_ImportModule(string name);
import "DPI-C" context function PyObject PyObject_Call(PyObject target, PyObject args, PyObject kwargs);
import "DPI-C" context function PyObject PyObject_GetAttrString(PyObject base, string attr);
import "DPI-C" context function PyObject PyTuple_New(int unsigned sz);
import "DPI-C" context function int PyTuple_SetItem(PyObject t, int unsigned pos, PyObject i);
import "DPI-C" context function PyObject PyLong_FromUnsignedLongLong(longint unsigned val);
import "DPI-C" context function longint unsigned PyLong_AsUnsignedLongLong(PyObject val);

