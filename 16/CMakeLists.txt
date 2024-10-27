cmake_minimum_required(VERSION 3.29.8)
project(prj_fork2)

set(SRC_FORK fork.c)
add_executable(fork ${SRC_FORK})

set(SRC_FORK2 fork2.c)
add_executable(fork2 ${SRC_FORK2})