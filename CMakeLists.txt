cmake_minimum_required(VERSION 3.0.0)
project(NewProjectTemplate VERSION 0.1.0)

# Set standard and enforce
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Add compiler options
string(APPEND ${CMAKE_CXX_FLAGS} "-Wall")

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

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
