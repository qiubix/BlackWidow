project(BlackWidow)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/gtest/build)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -pthread")
enable_testing()

set(sources
   main.cpp
   BowlingGameTest.cpp)
add_executable(BolingGameTest ${sources})
target_link_libraries(BolingGameTest pthread)
target_link_libraries(BolingGameTest gmock)
target_link_libraries(BolingGameTest gtest)
add_dependencies(BolingGameTest gmock)
add_test(BolingGameTest BolingGameTest)
