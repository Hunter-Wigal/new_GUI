from setuptools import find_packages
from setuptools import setup

setup(
    name='science_servo_control',
    version='0.0.0',
    packages=find_packages(
        include=('science_servo_control', 'science_servo_control.*')),
)
