from setuptools import find_packages
from setuptools import setup

setup(
    name='ocean_optics_spectrometer',
    version='0.0.0',
    packages=find_packages(
        include=('ocean_optics_spectrometer', 'ocean_optics_spectrometer.*')),
)
