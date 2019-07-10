cmake_minimum_required(VERSION 3.13)
project(logexample)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(log4cxx)

add_executable(logexample main.cpp)
message(${Log4cxx_INCLUDE_DIR})
target_include_directories(logexample PRIVATE ${Log4cxx_INCLUDE_DIR})
target_link_libraries(logexample ${Log4cxx_LIBRARY})