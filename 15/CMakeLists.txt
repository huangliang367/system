cmake_minimum_required(VERSION 3.29.8)
project(prj_fork1)

set(SRC_HELLO hello.c)
add_executable(hello ${SRC_HELLO})

set(SRC fork.c)
add_executable(${PROJECT_NAME} ${SRC})