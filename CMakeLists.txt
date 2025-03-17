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

# Create the Fox-C shared library
add_library(fox-c-shared SHARED
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

# Set library version
set_target_properties(fox-c-shared PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
)

# Optionally, add a version-specific shared library (e.g., for a versioned library)
# This step is optional but can help with version control for shared libraries.
# add_library(fox-c-shared-v${PROJECT_VERSION} SHARED ...)

# Install the static and shared libraries
install(TARGETS fox-c fox-c-shared
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)

# Install the header files
install(FILES foxC.h
    DESTINATION include/fox-c
)
install(DIRECTORY header/
    DESTINATION include/fox-c
    FILES_MATCHING PATTERN "*.h"
)

# Optionally, provide an example executable (main.cpp)
# You can remove this section if you don't want an example executable.
add_executable(example main.cpp)
target_link_libraries(example PRIVATE fox-c)

# Optional: Enable testing if desired (can be removed if unnecessary)
# enable_testing()
# add_test(NAME example_test COMMAND example)

# Optionally set include paths (only if needed for some users to get auto-completion)
# target_include_directories(example PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/header)

# Optional: Set up specific compiler options, warnings, or debug flags
# if(MSVC)
#    target_compile_options(fox-c PRIVATE /W4)
# endif()
