
- Key element is 'api' defined in Python
  - Instances of 'API' classes have built-in machinery for communication

- HDL interface objects may be lightweight or a bit heavier
  - HDL interface object for VPI is just a Python object
    - VPI does register a new set of convenience methods
  - HDL interface object for DPI is a class with utilities
- Every instance of an HDL interface object has a companion Python object
  - May be supplied when the HDL-side interface object is created
  - May be created as part of HDL-side interface creation

- Python 'api' object has a 'peer' handle, through which 

SV supports function and task (async) calls in both directions
VPI/VHPI/FLI supports task calls Python->HDL and non-blocking function calls HDL->Python

## TLM IF
- Use blocking abstraction on both sides
  - HVL/Python uses task/async to 'put' and 'pull' items
  - HDL implementation uses FIFO
  - HDL transport uses
    - Blocking HVL/Python -> HDL 'put' (ensures compat with VPI/VHPI/FLI/HW)
    - Non-blocking HDL -> HVL/Python 'put'

  
