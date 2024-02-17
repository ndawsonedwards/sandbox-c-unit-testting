# Set the minimum required version for CMake
cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TEST_PROJECT_NAME "${PROJECT_NAME}_test")
# Include GoogleTest
include(FetchContent)

# Download and configure GoogleTest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Locate test files
# Locate source files
file(GLOB SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.c")
list(FILTER SRC_FILES EXCLUDE REGEX "main.c")
message("Source : " ${SRC_FILES})
file(GLOB_RECURSE TEST_SOURCES "*.cc")

# Create test executable
enable_testing()

add_executable(${TEST_PROJECT_NAME} 
  ${SRC_FILES} 
  ${TEST_SOURCES})

target_include_directories (${TEST_PROJECT_NAME}
  PUBLIC
  ${PROJECT_SOURCE_DIR}/src
  ${googletest_SOURCE_DIR}/googletest/include/gtest
)

# Link GoogleTest to the test executable
target_link_libraries(${TEST_PROJECT_NAME} GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${TEST_PROJECT_NAME})


