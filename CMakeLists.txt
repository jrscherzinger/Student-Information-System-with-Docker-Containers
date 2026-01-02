cmake_minimum_required(VERSION 3.10)
project(student_information_system)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PQXX REQUIRED)

include_directories(include)

add_executable(sis
    src/main.cpp
    src/database.cpp
)

target_link_libraries(sis pqxx pq)
