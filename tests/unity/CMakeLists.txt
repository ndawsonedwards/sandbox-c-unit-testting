

# Set the minimum required version for CMake
cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TEST_PROJECT_NAME "${PROJECT_NAME}_unity")
# Include GoogleTest
include(FetchContent)


# Locate test files
file(GLOB THIRD_PARTY_SOURCE 
	"${PROJECT_SOURCE_DIR}/3rd-party/unity/*.c")

file(GLOB TEST_SOURCE
	"${PROJECT_SOURCE_DIR}/tests/unity/*.c"
	"${PROJECT_SOURCE_DIR}/tests/unity/tests/*.c"
	"${PROJECT_SOURCE_DIR}/tests/unity/runners/*.c")

# Create test executable
enable_testing()

add_executable(${TEST_PROJECT_NAME} 
	${PROJECT_SOURCE} 
	${THIRD_PARTY_SOURCE}
	${TEST_SOURCE})

target_include_directories (${TEST_PROJECT_NAME}
	PUBLIC
	${PROJECT_SOURCE_DIR}/src
	${PROJECT_SOURCE_DIR}/3rd-party/unity
)


