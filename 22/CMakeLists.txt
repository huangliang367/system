cmake_minimum_required(VERSION 3.29.8)
project(prj_pause)

set(SRC_PAUSE pause.c)
add_executable(pause ${SRC_PAUSE})

set(SRC_SLEEP sleep.c)
add_executable(sleep ${SRC_SLEEP})

set(SRC_WHILE while.c)
add_executable(while ${SRC_WHILE})

set(ALL_TARGETS ${ALL_TARGETS} pause sleep while PARENT_SCOPE)
