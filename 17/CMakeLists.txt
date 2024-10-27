cmake_minimum_required(VERSION 3.29.8)
project(prj_fork_wait)

set(SRC_FORK fork.c)
add_executable(${PROJECT_NAME} ${SRC_FORK})