cmake_minimum_required(VERSION 3.29.8)
project(prj_open_close)
set(SRC open.c test.c)
add_executable(${PROJECT_NAME} ${SRC})