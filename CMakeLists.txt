cmake_minimum_required(VERSION 3.10)
project(OOP)

find_package(GTest REQUIRED)

add_executable(OOP_main main.cpp func.cpp)
add_executable(OOP_test tests.cpp func.cpp)

target_link_libraries(OOP_test GTest::gtest_main)

enable_testing()
add_test(NAME OOP_test COMMAND OOP_test)
