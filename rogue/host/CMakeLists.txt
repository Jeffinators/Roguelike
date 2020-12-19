add_library(
	host
	STATIC
	include/host/host.h
)

target_include_directories(host PUBLIC include)
target_link_libraries(host PUBLIC app algorithms)
