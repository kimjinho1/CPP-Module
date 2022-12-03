#include "iter.hpp"

void	printInt(int const &n) {
	std::cout << n << std::endl;
}

void	add42(std::string const &str) {
	std::cout << str << " 42" << std::endl;
}

int main(void) {
	int intArr[5] = {0, 1, 2, 3, 4};
	::iter<int>(intArr, 5, printInt);
	std::cout << std::endl;

	std::string strArr[3] = {"hi", "jinho", "kim"};
	::iter<std::string>(strArr, 3, add42);
	return 0;
}
