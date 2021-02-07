find_package(GTest REQUIRED)

set(BINARY_NAME ${CMAKE_PROJECT_NAME}_test)

# Set package variables
set(PLAYER_TEST_DIR player)

# Add all submodules to executable
add_executable(${BINARY_NAME}
    testMain.cpp
    ${PLAYER_TEST_DIR}/Player-test.cpp
)

# Link all the libraries
target_link_libraries(
  ${BINARY_NAME}
  ${CMAKE_PROJECT_NAME}_lib
  GTest::gtest
)
