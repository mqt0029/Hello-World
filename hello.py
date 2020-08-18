from __future__ import print_function

import cv2
import numpy as np
import scipy as sp
import tensorflow as tf
import pyrealsense2 as pr2
import dlib as dl
import torch as tv

print( f'Using OpenCV version { cv2.__version__ }' )
print( f'   Using CUDA: { cv2.cuda.getCudaEnabledDeviceCount() }' )

print( f'Using Tensorflow version { tf.__version__ }' )
GPUs = tf.config.list_physical_devices('GPU')

print( f'    GPU Count: { len(GPUs) }' )

print( f'Using PyTorch version {tv.__version__}' )
print( f'   Using CUDA: { tv.cuda.is_available() }' )

print( f'Using dlib version { dl.__version__ }' )
print( f'   Using CUDA: { dl.DLIB_USE_CUDA }' )

# print( f'Using Intel Realsense version { pr2.__version__ }' )

print( 'Hello World!' )