cmake_minimum_required(VERSION 3.10)
project(fox-c VERSION 1.0.0 LANGUAGES CXX)

# Include headers
include_directories(${PROJECT_SOURCE_DIR}/header)

# Add library
add_library(fox-c SHARED main.cpp)

# Install library
install(TARGETS fox-c
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        PUBLIC_HEADER DESTINATION include/fox-c)

# Install headers
install(DIRECTORY headers/ DESTINATION include/fox-c)
install(FILES foxC.h DESTINATION include/fox-c)