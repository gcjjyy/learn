cmake_minimum_required(VERSION 3.22.0)
project(cmake_test)

set(PROGRAM_NAME cmake_exe)
set(CMAKE_CXX_STANDARD 17)

include (Library.cmake)

set(SRCS ${SRCS} main.cpp)

link_directories(${CMAKE_SOURCE_DIR}/build)

add_executable(${PROGRAM_NAME} ${SRCS})
target_link_libraries(${PROGRAM_NAME} LINK_PUBLIC cmake_lib)

add_dependencies(${PROGRAM_NAME} cmake_lib)

