cmake_minimum_required(VERSION 3.29.8)
project(prj_mkdir)
set(SRC mkdir.c)
add_executable(${PROJECT_NAME} ${SRC})
set(ALL_TARGETS ${ALL_TARGETS} ${PROJECT_NAME} PARENT_SCOPE)
