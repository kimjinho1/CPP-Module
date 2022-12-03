#include "whatever.hpp"

int main(void) {
	int a = 1;
	int b = 9;

	std::cout << "a: " << a << ", b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "a < b -> " << min(a, b) << std::endl;
	std::cout << "a > b -> " << max(a, b) << std::endl;
	std::cout << std::endl;

	std::string s1("abc");
	std::string s2("abd");

	std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
	std::cout << "s1 < s2 -> " << min(s1, s2) << std::endl;
	std::cout << "s1 > s2 -> " << max(s1, s2) << std::endl;
	return 0;
}
