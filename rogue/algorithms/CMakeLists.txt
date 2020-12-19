add_library(
	algorithms
	STATIC
	include/algorithms/algorithms.h
	src/algorithms.cpp
)

target_include_directories(algorithms PUBLIC include)
target_link_libraries(algorithms PUBLIC host)