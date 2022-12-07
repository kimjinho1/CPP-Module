#include "Span.hpp"

int main(void) {
	try {
		Span	sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(100);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		Span				sp(100000);

		std::srand((unsigned int)time(NULL));
		for (int i = 0; i < 100000; i++)
			sp.addNumber(rand());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(rand());
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		Span						sp(100000);
		std::vector<int>			vec(100000);

		std::srand((unsigned int)time(NULL));
		std::generate(vec.begin(), vec.end(), std::rand);
		sp.fill(vec.begin(), vec.end());
		for (int i = 0; i < 5; i++)
			std::cout << vec[i] << std::endl;
		std::cout << "-----------" << std::endl;
		sp.print(0, 5);
		std::cout << "-----------" << std::endl;
		for (int i = 99995; i < 100000; i++)
			std::cout << vec[i] << std::endl;
		std::cout << "-----------" << std::endl;
		sp.print(99995, 5);
		std::cout << "-----------" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		Span	sp(0);

		std::cout << sp.shortestSpan() << std::endl;
		sp.addNumber(100);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		Span	sp(2);

		sp.addNumber(0);
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(100);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;
	return 0;
}
