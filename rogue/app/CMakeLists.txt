add_library(
	rogue
	STATIC
	include/app/sample.h
	src/app.cpp
)

target_include_directories(rogue PUBLIC include)
target_include_libraries(app PUBLIC algorithms host)