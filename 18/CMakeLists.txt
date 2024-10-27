cmake_minimum_required(VERSION 3.29.8)
project(prj_fork2)

set(SRC_FORK fork.c)
add_executable(${PROJECT_NAME} ${SRC_FORK})

set(ALL_TARGETS ${ALL_TARGETS} ${PROJECT_NAME} PARENT_SCOPE)
