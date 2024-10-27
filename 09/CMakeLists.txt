cmake_minimum_required(VERSION 3.29.8)
project(prj_closedir)
set(SRC opendir.c)
add_executable(${PROJECT_NAME} ${SRC})