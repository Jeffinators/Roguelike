cmake_minimum_required(VERSION 3.16)
project(FalconRogue VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(WIN32)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
	add_definitions (/D "_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS" /D "_CRT_SECURE_NO_WARNINGS")
endif()

if ((CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
		OR (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
		OR (CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang"))
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse2 -mavx -mf16c")
endif()

add_subdirectory(lib)
add_subdirectory(rogue)