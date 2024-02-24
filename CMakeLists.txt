# CMakeLists.txt
cmake_minimum_required(VERSION 3.21)
project(cros3)

set(CMAKE_CXX_STANDARD 14)

# Add the library target
add_library(example_lib SHARED lib_example.cpp lib_example.h)

# Add the executable target that uses the library
add_executable(cros3 main.cpp)

# Link the executable with the library
target_link_libraries(cros3 PRIVATE example_lib)
