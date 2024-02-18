

# Set the minimum required version for CMake
cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TEST_PROJECT_NAME "${PROJECT_NAME}_unity")
# Include GoogleTest
include(FetchContent)


# Locate test files
file(GLOB SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.c")
list(FILTER SRC_FILES EXCLUDE REGEX "main.c")

file(GLOB TEST_SOURCES 
    "${PROJECT_SOURCE_DIR}/tests/unity/*.c"
    "${PROJECT_SOURCE_DIR}/tests/unity/tests/*.c"
    "${PROJECT_SOURCE_DIR}/tests/unity/tests/runners/*.c"
    )

message("UNITY_SOURCES = ${UNITY_SOURCES}")

# Create test executable
enable_testing()

add_executable(${TEST_PROJECT_NAME} 
  ${SRC_FILES} 
  ${TEST_SOURCES})

target_include_directories (${TEST_PROJECT_NAME}
  PUBLIC
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/tests/unity
)


