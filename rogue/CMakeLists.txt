set(ROGUE_ORG_NAME "Jeffinators")
set(ROGUE_APP_NAME "Rogue")

add_executable(Rogue main.cpp)

target_link_libraries(Rogue PRIVATE app)

set_target_properties(Rogue PROPERTIES OUTPUT_NAME Rogue
	ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
	LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

if(WIN32)
	set_property(DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Rogue)
	set_target_properties(Rogue PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/build-windows/bin")
endif()
