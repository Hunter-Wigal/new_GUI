from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup
d = generate_distutils_setup(
	packages=['rover_gui_common'],
	package_dir={'': 'src'}
)
setup(**d)
