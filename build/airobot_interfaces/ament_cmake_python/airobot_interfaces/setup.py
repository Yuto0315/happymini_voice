from setuptools import find_packages
from setuptools import setup

setup(
    name='airobot_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('airobot_interfaces', 'airobot_interfaces.*')),
)
