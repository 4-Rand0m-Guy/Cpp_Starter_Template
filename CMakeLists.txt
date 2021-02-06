cmake_minimum_required(VERSION 3.0.0)
project(NewProjectTemplate VERSION 0.1.0)

# Set standard and enforce
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Add compiler options
string(APPEND ${CMAKE_CXX_FLAGS} "-Wall")

# include_directories(src)

# add_subdirectory(lib)
# add_subdirectory(src)
# add_subdirectory(test)

# Using the "cmake_find_package" generator from conan
set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})
set(CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR} ${CMAKE_PREFIX_PATH})

find_package(GTest REQUIRED)

# Set package variables
set(SOURCE_DIR "src")
set(PLAYER_DIR ${SOURCE_DIR}/player)

# Set package contents
set(PLAYER
    ${PLAYER_DIR}/Player.cpp
    ${PLAYER_DIR}/Player.hpp
)

# Add all submodules to executable
add_executable(${CMAKE_PROJECT_NAME} 
    ${SOURCE_DIR}/main.cpp 
    ${PLAYER} 
)

target_link_libraries(
  ${CMAKE_PROJECT_NAME} 
  GTest::GTest
)
