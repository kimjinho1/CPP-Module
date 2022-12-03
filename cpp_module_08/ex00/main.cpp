#include "easyfind.hpp"

int main(void) {
	std::vector<int> vec;
	std::vector<int>::iterator iter;

	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	std::vector<int>::iterator i;
	for (i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << std::endl;
	std::cout << "----------------------" << std::endl;

	try {
		iter = easyfind(vec, 2);
		std::cout << *iter << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		iter = easyfind(vec, 10);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
