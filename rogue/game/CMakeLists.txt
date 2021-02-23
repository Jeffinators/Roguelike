add_library(
	game
	STATIC
	include/game.h
	src/game.cpp
)

target_include_directories(game PUBLIC include)
target_link_libraries(game PUBLIC sdl2)