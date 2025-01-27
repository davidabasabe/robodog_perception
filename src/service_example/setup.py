from setuptools import find_packages, setup

package_name = 'service_example'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gp4331',
    maintainer_email='gabriele.gandolfi@kit.edu',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_service_server = service_example.simple_service_server:main',
            'simple_service_client = service_example.simple_service_client:main',
        ],
    },
)
