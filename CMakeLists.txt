project(BlackWidow)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/gtest/build)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -pthread")
enable_testing()

set(sources
   main.cpp
   BlackWidowTest.cpp)
add_executable(BlackWidowTest ${sources})
target_link_libraries(BlackWidowTest pthread)
target_link_libraries(BlackWidowTest gmock)
target_link_libraries(BlackWidowTest gtest)
add_dependencies(BlackWidowTest gmock)
add_test(BlackWidowTest BlackWidowTest)
