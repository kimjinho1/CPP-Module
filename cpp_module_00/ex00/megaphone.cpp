#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++) {
		std::string	line(av[i]);
		for (size_t j = 0; j < line.length(); j++)
			std::cout << static_cast<char>(std::toupper(line.at(j)));
	}
	std::cout << std::endl;
	return (0);
}