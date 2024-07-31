#include <iostream>
#include "include/basic_dsa.h"

#define PROJECT_NAME "cpp_examples"

int main(int argc, char **argv) {
	if(argc != 1) {
		std::cout << argv[0] <<  "takes no arguments.\n";
		return 1;
	}
	std::cout << "This is project " << PROJECT_NAME << ".\n";

	auto basicDsa = BasicDSA();
	basicDsa.Example1();

	return 0;
}
