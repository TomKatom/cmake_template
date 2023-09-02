#include "test_lib/test_lib.hpp"

#include <iostream>


int main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
	std::cout << "Data: " << test_lib::get_data() << std::endl;

	return 0;
}
