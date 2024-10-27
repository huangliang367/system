cmake_minimum_required(VERSION 3.29.8)
project(prj_fifo)

set(SRC_WRITER fifo_write.c)
add_executable(fifo_writer ${SRC_WRITER})

set(SRC_READER fifo_read.c)
add_executable(fifo_reader ${SRC_READER})