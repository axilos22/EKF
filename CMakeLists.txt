cmake_minimum_required (VERSION 2.6)
project (EKF)
# The version number.
set (EKF_VERSION_MAJOR 0)
set (SRC_DIR /src)

find_package(Eigen3 REQUIRED)

include_directories(EIGEN3_INCLUDE_DIR)

file(GLOB ekf_SRC
    "src/*.cpp"
    "src/*.h"
    "src/core/*.cpp"
    "src/core/*.h"
)

add_executable(EKF ${ekf_SRC})
