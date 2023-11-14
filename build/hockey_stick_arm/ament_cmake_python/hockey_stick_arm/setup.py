from setuptools import find_packages
from setuptools import setup

setup(
    name='hockey_stick_arm',
    version='0.0.0',
    packages=find_packages(
        include=('hockey_stick_arm', 'hockey_stick_arm.*')),
)
