

# Set the minimum required version for CMake
cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TEST_PROJECT_NAME "${PROJECT_NAME}_gtest")

# Download and configure GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  SOURCE_DIR ${PROJECT_SOURCE_DIR}/3rd-party/googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# Locate source files
file(GLOB TEST_SOURCE 
    "${PROJECT_SOURCE_DIR}/tests/googletest/*.cc")

# Create test executable
enable_testing()

add_executable(${TEST_PROJECT_NAME} 
  ${PROJECT_SOURCE} 
  ${TEST_SOURCE})

target_include_directories (${TEST_PROJECT_NAME}
  PUBLIC
  ${PROJECT_SOURCE_DIR}/src
  ${googletest_SOURCE_DIR}/googletest/include/gtest
)

# Link GoogleTest to the test executable
target_link_libraries(${TEST_PROJECT_NAME} GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${TEST_PROJECT_NAME})
