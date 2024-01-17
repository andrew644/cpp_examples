cmake_minimum_required(VERSION 3.5)
project(cpp_examples)

set(SOURCES
	src/main.cpp
)

add_executable(cpp_examples ${SOURCES})

target_include_directories(cpp_examples
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
