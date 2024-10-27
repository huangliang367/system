cmake_minimum_required(VERSION 3.29.8)
project(prj_msg)

set(SRC_MSG1 a.c)
add_executable(msg1 ${SRC_MSG1})

set(SRC_MSG2 b.c)
add_executable(msg2 ${SRC_MSG2})

set(ALL_TARGETS ${ALL_TARGETS} msg1 msg2 PARENT_SCOPE)
