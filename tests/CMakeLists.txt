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
FetchContent_MakeAvailable(googletest)

# Locate test files
file(GLOB_RECURSE TEST_SOURCES "*.cc")

# Create test executable
add_executable(${TEST_PROJECT_NAME} ${TEST_SOURCES})

target_include_directories (${TEST_PROJECT_NAME}
  PUBLIC
  ${PROJECT_SOURCE_DIR}/src
)

# Link GoogleTest to the test executable
target_link_libraries(${TEST_PROJECT_NAME} gtest gtest_main)

# Discover and add all tests to CTest
include(GoogleTest)
gtest_discover_tests(${TEST_PROJECT_NAME})


