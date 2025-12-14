cmake_minimum_required(VERSION 4.1.0)
project(test CXX)

include(./test.cmake)

set(gtest_libs
    ${PROJECT_SOURCE_DIR}/gtest_lib/libgtest.a
    ${PROJECT_SOURCE_DIR}/gtest_lib/libgtest_main.a
    ${PROJECT_SOURCE_DIR}/gtest_lib/libgmock.a
    ${PROJECT_SOURCE_DIR}/gtest_lib/libgmock_main.a
)

add_executable(test hello.cpp)
add_executable(unittest1 ${PROJECT_SOURCE_DIR}/src/gtest_samples/sample1_unittest.cc ${PROJECT_SOURCE_DIR}/src/gtest_samples/sample1.cc)

target_include_directories(unittest1 PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(unittest1 ${gtest_libs})


print_hello()
