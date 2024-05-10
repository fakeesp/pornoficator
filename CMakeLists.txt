cmake_minimum_required(VERSION 3.29)
project(pornoficator VERSION 0.1.0 LANGUAGES C CXX)

include(./vcpkg/scripts/buildsystems/vcpkg.cmake)

find_package(fmt CONFIG REQUIRED)

add_executable(pornoficator main.cpp)
target_link_libraries(pornoficator PRIVATE fmt::fmt)