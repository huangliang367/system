cmake_minimum_required(VERSION 3.29.8)
project(prj_signal)

set(SRC_ALARM alarm.c)
add_executable(alarm ${SRC_ALARM})

set(SRC_KILL kill.c)
add_executable(kill ${SRC_KILL})

set(SRC_RAISE raise.c)
add_executable(raise ${SRC_RAISE})

set(SRC_TEST test.c)
add_executable(test ${SRC_TEST})

set(ALL_TARGETS ${ALL_TARGETS} alarm kill raise test PARENT_SCOPE)
