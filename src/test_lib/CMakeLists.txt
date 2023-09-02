add_library(test_lib
	"test_lib.cpp"
)

add_library(testproject::test_lib ALIAS test_lib)

target_include_directories(test_lib PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
					   $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>)

