#include <iostream>
#include "Convert.h"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: Argument error" << std::endl;
		return 0;1
	}
	Convert	convert(av[1]);
	std::cout << convert << std::endl;
	return 0;
}
