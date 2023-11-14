from setuptools import find_packages
from setuptools import setup

setup(
    name='theora_webcams',
    version='0.0.0',
    packages=find_packages(
        include=('theora_webcams', 'theora_webcams.*')),
)
