cmake_minimum_required(VERSION 3.0.0)
project(NewProjectTemplate VERSION 0.1.0)

# Set standard and enforce
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add compiler options
add_compile_options(-Wall -Werror)

# Using the "cmake_find_package" generator from conan
set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})
set(CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR} ${CMAKE_PREFIX_PATH})

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
