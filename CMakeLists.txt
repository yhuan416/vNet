cmake_minimum_required(VERSION 3.0)

project(vNet C)

option(BUILD_TESTING "Build tests" OFF)

add_subdirectory(third_party/kcp)

add_library(vNet src/vNet.c)
target_include_directories(vNet PUBLIC include)
target_include_directories(vNet PRIVATE private_include)
target_include_directories(vNet PRIVATE third_party/kcp)
target_link_libraries(vNet kcp)
