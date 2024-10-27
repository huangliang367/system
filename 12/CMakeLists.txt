cmake_minimum_required(VERSION 3.29.8)
project(prj_static_lib)

set(LIB_SRC mylib.c)
add_library(mylib STATIC ${LIB_SRC})

set(SRC test.c)
add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} PRIVATE mylib)