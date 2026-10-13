from setuptools import find_packages
from setuptools import setup

setup(
    name='navpro_enterprise_interfaces',
    version='2.0.0',
    packages=find_packages(
        include=('navpro_enterprise_interfaces', 'navpro_enterprise_interfaces.*')),
)
