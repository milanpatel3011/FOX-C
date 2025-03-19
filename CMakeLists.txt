cmake_minimum_required(VERSION 3.10)
project(fox-c VERSION 1.0.0 LANGUAGES CXX)

# Include headers
include_directories(${PROJECT_SOURCE_DIR})

# Create the library
add_library(fox-c STATIC ${PROJECT_SOURCE_DIR}/main.cpp)

# Install the library
install(TARGETS fox-c
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )

# Install the header file
install(FILES ${PROJECT_SOURCE_DIR}/foxC.h
        DESTINATION include/fox-c
        )

# Install all headers from the header folder
install(DIRECTORY ${PROJECT_SOURCE_DIR}/header/
        DESTINATION include/fox-c/header
        )