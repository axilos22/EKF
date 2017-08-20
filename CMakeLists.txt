cmake_minimum_required (VERSION 2.6)
project (EKF)
# The version number.
set (EKF_VERSION_MAJOR 0)
set (SRC_DIR /src)

find_package(Eigen3 REQUIRED)

include_directories(EIGEN3_INCLUDE_DIR)

file(GLOB ekf_SRC
    "src/*.h"
    "src/*.cpp"
)

add_executable(EKF ${ekf_SRC})
