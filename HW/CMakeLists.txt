# CMake 프로그램의 최소 버전
cmake_minimum_required(VERSION 3.10)

# 프로젝트 정보
project(
  ModooCode
  VERSION 0.1
  DESCRIPTION "예제 프로젝트"
  LANGUAGES CXX)

target_compile_options(program PUBLIC -Wall -Werror)

target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)

add_executable (main main.cc)
