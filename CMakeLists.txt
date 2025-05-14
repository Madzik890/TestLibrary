cmake_minimum_required(VERSION 3.14)

project(TestLibrary LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

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


add_executable(cpp98_test1
               cpp98/test1.cpp)

target_link_libraries(cpp98_test1)


add_executable(cpp98_test2
               cpp98/test2.cpp)

target_link_libraries(cpp98_test2)


add_executable(cpp98_test3
               cpp98/test3.cpp)

target_link_libraries(cpp98_test3)

add_executable(cpp98_test4
               cpp98/test4.cpp)

target_link_libraries(cpp98_test4)

add_executable(cpp98_test5
               cpp98/test5.cpp)

target_link_libraries(cpp98_test5)

add_executable(cpp98_test6
               cpp98/test6.cpp)

target_link_libraries(cpp98_test6)

add_executable(cpp98_test7
               cpp98/test7.cpp)

target_link_libraries(cpp98_test7)

add_executable(cpp98_test8
               cpp98/test8.cpp)

target_link_libraries(cpp98_test8)