#include "Scalar.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: Argument error" << std::endl;
		return 0;
	}
	Scalar	scalar(av[1]);
	scalar.convert();
	return 0;
}
