cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(Hello VERSION 1.2.3.400)
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(Hello ${SRC_FILES}) #you can add all src file here but that is not a good practice.
message("${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)