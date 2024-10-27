cmake_minimum_required(VERSION 3.29.8)
project(prj_semget)

set(SRC_SEMGET semget.c)
add_executable(semget ${SRC_SEMGET})

set(ALL_TARGETS ${ALL_TARGETS} semget PARENT_SCOPE)
