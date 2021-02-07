set(BINARY_NAME ${CMAKE_PROJECT_NAME})

# Set package variables
set(PLAYER_DIR player)

# Set package contents
set(PLAYER
    ${PLAYER_DIR}/Player.cpp
    ${PLAYER_DIR}/Player.hpp
)

#Assign sources to variable
set(SOURCES
    main.cpp 
    ${PLAYER} 
)

# Add all sources to executable
add_executable(${BINARY_NAME} 
  ${SOURCES}
)

#create a lib to use in the tests
add_library(${BINARY_NAME}_lib STATIC ${SOURCES})