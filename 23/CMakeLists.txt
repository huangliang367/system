cmake_minimum_required(VERSION 3.29.8)
project(prj_signal2)

set(SRC_SIGNAL signal.c)
add_executable(signal ${SRC_SIGNAL})

set(SRC_SIGNAL1 signal1.c)
add_executable(signal1 ${SRC_SIGNAL1})

set(SRC_SIGNAL2 signal2.c)
add_executable(signal2 ${SRC_SIGNAL2})

set(ALL_TARGETS ${ALL_TARGETS} signal signal1 signal2 PARENT_SCOPE)
