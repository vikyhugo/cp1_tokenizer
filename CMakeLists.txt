cmake_minimum_required(VERSION 3.0...4.4.4)
project("cp1_tokenizer" C)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build")
include_directories("${CMAKE_SOURCE_DIR}/include")

add_library("cp1_tokenizer" "src/cp1_tokenizer.c")
