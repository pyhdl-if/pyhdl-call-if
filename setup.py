#****************************************************************************
#* setup.py for pyhdl-if
#****************************************************************************
import os
from setuptools import setup

version="0.0.1"

if "BUILD_NUM" in os.environ.keys():
    version += ".%s" % os.environ["BUILD_NUM"]

# First need to establish where things are
pyhdl_pi_if_dir = os.path.dirname(os.path.abspath(__file__))


setup(
  name = "pyhdl-call-if",
  version=version,
  packages=['hdl_call_if'],
  package_dir = {'' : 'src'},
  author = "Matthew Ballance",
  author_email = "matt.ballance@gmail.com",
  description = ("Python interface for HDL programming interfaces"),
  long_description = """
  Provides a library interface for creating and evaluating ARL models at an API level
  """,
  license = "Apache 2.0",
  keywords = ["SystemVerilog", "Verilog", "VHDL", "RTL", "Python"],
  url = "https://github.com/fvutils/pyhdl-if",
  install_requires=[
  ],
  setup_requires=[
    'setuptools_scm',
    'cython',
  ],
  entry_points={
      'ivpm.pkginfo': [
        'pyhdl-call-if = hdl_call_if.pkginfo:PkgInfo'
      ]
  },
)


