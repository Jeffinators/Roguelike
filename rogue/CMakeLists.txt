set(FALCONROGUE_ORG_NAME "Jeffinators")
set(FALCONROGUE_APP_NAME "FalconRogue")

execute_process(
	COMMAND git rev-list HEAD --count
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	OUTPUT_VARIABLE GIT_COUNT
	OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(
	COMMAND git rev-parse --short HEAD
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	OUTPUT_VARIABLE GIT_HASH
	OUTPUT_STRIP_TRAILING_WHITESPACE)

if(GIT_HASH STREQUAL "")
	set(FALCONROGUE_GIT_REV "Development version")
else()
	set(FALCONROGUE_GIT_REV "${GIT_COUNT}-${GIT_HASH}")
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	set(LINUX TRUE)
endif()

add_subdirectory(app)
add_subdirectory(algorithms)
add_subdirectory(host)

add_executable(FalconRogue MACOSX_BUNDLE main.cpp)

target_link_libraries(FalconRogue PRIVATE app)

set_target_properties(FalconRogue PROPERTIES OUTPUT_NAME FalconRogue
	ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
	LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")