from setuptools import find_packages
from setuptools import setup

setup(
    name='pca_servo_interface',
    version='0.7.1',
    packages=find_packages(
        include=('pca_servo_interface', 'pca_servo_interface.*')),
)
