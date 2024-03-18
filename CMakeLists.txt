cmake_minimum_required(VERSION 3.14)

project(TestLibrary LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(TestLibrary STATIC
          src/Sort.cpp
          src/Database.cpp
)

include_directories(src)

target_link_libraries(TestLibrary PRIVATE pthread)

add_executable(sort_tests
               tests/sort_tests.cpp)

target_link_libraries(sort_tests TestLibrary)

add_executable(database_tests
               tests/database_tests.cpp)

target_link_libraries(database_tests TestLibrary)

add_executable(thread_tests
               tests/thread_tests.cpp)

target_link_libraries(thread_tests TestLibrary)

add_executable(thread2_tests
               tests/thread2_tests.cpp)

target_link_libraries(thread2_tests TestLibrary)

