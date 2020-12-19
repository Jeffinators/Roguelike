add_library(
	app
	STATIC
)

target_include_directories(app PUBLIC include)
target_link_libraries(app PUBLIC algorithms host)