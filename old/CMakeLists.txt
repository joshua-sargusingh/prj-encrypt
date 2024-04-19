cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project
project(
	encrypt
	LANGUAGES CXX
)

include_directories(include)

# Message
message(STATUS "Adding executable")

# Add your source files
add_executable(${PROJECT_NAME} src/main.cpp src/encrypt.cpp)