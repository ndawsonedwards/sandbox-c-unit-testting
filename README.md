# Sandbox - C Unit Testing
Sandbox - C Unit Testing is a for the experimentation of different 3rd party C unit testing frameworks. 

## Test Frameworks
The following list are C unit test frameworks in thsi project:

 - googletest : https://google.github.io/googletest/
    - Github : https://github.com/google/googletest
    - Written in C++ 
    - Retrieved automatically in cmake build process

 - ThrowTheSwitch/Unity : https://www.throwtheswitch.org/unity
    - Github : https://github.com/ThrowTheSwitch/Unity
    - Written in C
    - Currently manually added just the source to project. 

## Building
Cmake is used to build the sample application and all test frameworks. There are helper scripts to clean and build
 - clean.sh - removes /build folder
 - rebuild.sh - runs cmake with "Unix Makefiles" target, runs makefile

## Running the Tests
Executables found in respective 3rd party build dir, 
- /build/tests/gtest/
- /build/tests/unity/
-  ...

