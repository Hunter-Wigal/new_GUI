from setuptools import find_packages
from setuptools import setup

setup(
    name='marker_interfacing',
    version='0.0.0',
    packages=find_packages(
        include=('marker_interfacing', 'marker_interfacing.*')),
)
