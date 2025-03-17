cmake_minimum_required(VERSION 3.10)

project(FoxC VERSION 1.0.0 DESCRIPTION "A C++ Utility Library" LANGUAGES CXX)

# Set the standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(header)

# Add the main program source (main.cpp) and any other .cpp files (e.g., foxC.cpp if you add it)
add_executable(fox-c main.cpp)

# Optionally, if you have a source file for the library like foxC.cpp, add it to the target
# target_sources(fox-c PRIVATE foxC.cpp)

# Install the header files
install(FILES foxC.h
    DESTINATION include/fox-c
)
install(DIRECTORY header/
    DESTINATION include/fox-c
    FILES_MATCHING PATTERN "*.h"
)

# Find and link pthreads for threading support
find_package(Threads REQUIRED)
target_link_libraries(fox-c Threads::Threads)

# Optionally add more target settings or tests here if needed
