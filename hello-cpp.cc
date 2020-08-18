#include <iostream>
#include <boost/version.hpp>
#include <opencv4/opencv2/core/version.hpp>
#include <dlib/revision.h>
#include <librealsense2/rs.h>

int main(int argc, char const *argv[])
{
    std::cout << "Using OpenCV " << CV_VERSION << std::endl;

    std::cout << "Using Intel RealSense Library "     
              << RS2_API_FULL_VERSION_STR
              << std::endl;

    std::cout << "Using dlib "     
              << DLIB_MAJOR_VERSION << "."  // major version
              << DLIB_MINOR_VERSION << "."  // minor version
              << DLIB_PATCH_VERSION         // patch level
              << std::endl;

    std::cout << "Using Boost "     
              << BOOST_VERSION / 100000     << "."  // major version
              << BOOST_VERSION / 100 % 1000 << "."  // minor version
              << BOOST_VERSION % 100                // patch level
              << std::endl;

    printf( "Hello World!\n" ); 

    return 0;
}
