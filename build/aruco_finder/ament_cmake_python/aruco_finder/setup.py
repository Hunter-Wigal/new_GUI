from setuptools import find_packages
from setuptools import setup

setup(
    name='aruco_finder',
    version='0.0.0',
    packages=find_packages(
        include=('aruco_finder', 'aruco_finder.*')),
)
