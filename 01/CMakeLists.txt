cmake_minimum_required(VERSION 3.29.8)
project(prj_args)
set(SRC test.c)

add_executable(${PROJECT_NAME} ${SRC})

set(ALL_TARGETS ${ALL_TARGETS} ${PROJECT_NAME} PARENT_SCOPE)