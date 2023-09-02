add_executable(test_exe
	"main.cpp"
)

target_link_libraries(test_exe
	testproject::test_lib
)

target_include_directories(test_exe PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
					   $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>)
