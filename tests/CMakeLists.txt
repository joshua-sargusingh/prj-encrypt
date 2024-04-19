cmake_minimum_required(VERSION 3.14)

enable_testing()

# Fetch the Google Test framework
include(FetchContent)
message(STATUS "Fetching Google Test...")
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG v1.14.0
  GIT_PROGRESS TRUE
  )
FetchContent_MakeAvailable(googletest)

# Add a test executable
add_executable(test_encrypt test_encrypt.cpp)

# Link the test executable with Google Test and the library target
target_link_libraries(test_encrypt encrypt_lib ${GTEST_BOTH_LIBRARIES} GTest::gtest_main GTest::gtest)

# test
include(GoogleTest)
gtest_discover_tests(test_encrypt)