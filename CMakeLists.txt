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
add_executable(BowlingGameTest ${sources})
target_link_libraries(BowlingGameTest pthread)
target_link_libraries(BowlingGameTest gmock)
target_link_libraries(BowlingGameTest gtest)
add_dependencies(BowlingGameTest gmock)
add_test(BowlingGameTest BowlingGameTest)
