from setuptools import find_packages
from setuptools import setup

setup(
    name='happymini_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('happymini_msgs', 'happymini_msgs.*')),
)
