cmake_minimum_required(VERSION 3.29.8)
project(prj_shm)

set(SRC_SHMGET shmget.c)
add_executable(shmget ${SRC_SHMGET})

set(SRC_SHMGET1 shmget1.c)
add_executable(shmget1 ${SRC_SHMGET1})

set(ALL_TARGETS ${ALL_TARGETS} shmget shmget1 PARENT_SCOPE)
