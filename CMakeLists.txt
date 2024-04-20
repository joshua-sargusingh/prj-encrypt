cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project
project(encrypt LANGUAGES CXX)

# Add your source files for the main project
# creates library target from source file
# (all code in src file will be compiled into a libary that can be linked to other targets)
add_library(encrypt_lib src/encrypt.cpp)

# ${CMAKE_SOURCE_DIR}/include: This is the path to the directory containing header files that should be included when compiling the encrypt_lib target.
# This cmd includes the include folder from the root of my project to the include directories for the encrypt_lib target.
# By using PUBLIC, it means that any other target that links to encrypt_lib will also have access to these include directories. 
target_include_directories(encrypt_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_compile_options(encrypt_lib PUBLIC -g3 -O0)

# Add the main executable and link it with the library target
add_executable(main src/main.cpp)

#This line links the encrypt executable target with the encrypt_lib library target. By using PRIVATE, it means that only the encrypt executable target will have access to the linked libraries. In this case, encrypt will be able to use the functions and code defined in encrypt_lib.
target_link_libraries(main PRIVATE encrypt_lib)

# Include the tests directory for processing its CMakeLists.txt
add_subdirectory(tests)