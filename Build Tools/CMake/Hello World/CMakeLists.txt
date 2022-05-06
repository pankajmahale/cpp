cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(myVar HiThere)
message("The value of myVar = ${myVar}")

project(Hello VERSION 1.2.3.400)
add_executable(Hello hello.cpp)