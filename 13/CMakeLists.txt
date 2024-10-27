cmake_minimum_required(VERSION 3.29.8)
project(prj_share_lib)

set(LIB_SHARE_SRC mylib.c)
add_library(share_lib SHARED ${LIB_SHARE_SRC})

set(SRC test.c)
add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} PRIVATE share_lib)

set(ALL_TARGETS ${ALL_TARGETS} ${PROJECT_NAME} PARENT_SCOPE)
