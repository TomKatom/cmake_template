cmake_minimum_required(VERSION 3.21)

if (NOT DEFINED CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

project(
	testproject
	VERSION 1.0.0
	DESCRIPTION ""
	LANGUAGES CXX C)

add_subdirectory(src)

