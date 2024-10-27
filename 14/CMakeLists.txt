cmake_minimum_required(VERSION 3.29.8)
project(prj_fork)

set(SRC fork.c)
add_executable(${PROJECT_NAME} ${SRC})