cmake_minimum_required(VERSION 3.0)
project(tetris_kjs)

add_executable(tetris_kjs src/main.c src/display_menu.c src/display_tetris.c)
target_include_directories(tetris_kjs PUBLIC include)

install(TARGETS tetris_kjs DESTINATION /usr/local/bin)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION /usr/local/include)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/ DESTINATION /usr/local/src)

SET(CMAKE_GENERATOR "DEB")
SET(DEBIAN_PACKAGE_MAINTAINER "kjs")
SET(DEBIAN_PACKAGE_DESCRIPTION "Tetris game")
include(CPack)