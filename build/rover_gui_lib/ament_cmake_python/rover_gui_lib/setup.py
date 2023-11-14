from setuptools import find_packages
from setuptools import setup

setup(
    name='rover_gui_lib',
    version='0.0.0',
    packages=find_packages(
        include=('rover_gui_lib', 'rover_gui_lib.*')),
)
