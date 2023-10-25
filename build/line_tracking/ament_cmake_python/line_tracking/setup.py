from setuptools import find_packages
from setuptools import setup

setup(
    name='line_tracking',
    version='0.0.0',
    packages=find_packages(
        include=('line_tracking', 'line_tracking.*')),
)
