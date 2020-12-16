add_library(
	algorithms
	STATIC
	include/sample.h
	src/sample.cpp
)

target_include_directories(algorithms PUBLIC include)
