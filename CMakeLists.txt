cmake_minimum_required(VERSION 3.10)

project(FoxC VERSION 1.0.0 DESCRIPTION "A C++ Utility Library" LANGUAGES CXX)

# Set the standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include header files
include_directories(header)

# Create the Fox-C static library
add_library(fox-c STATIC
    foxC.h
    header/loop.h
    header/garbage.h
    header/math.h
    header/run.h
    header/short.h
    header/conditional.h
    header/dsa.h
    header/priorityQ.h
    header/trie.h
    header/unionFind.h
    header/random.h
    header/time.h
    header/string.h
    header/guard.h
    header/range.h
)

# Optionally, provide an example executable (main.cpp)
add_executable(example main.cpp)
target_link_libraries(example PRIVATE fox-c)
