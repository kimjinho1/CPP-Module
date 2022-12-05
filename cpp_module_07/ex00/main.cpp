#include "whatever.hpp"

int main(void) {
	int a = 0;
	int b = 1;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	const int c = 2;
	const int d = 3;

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::string s1 = "chaine1";
	std::string s2 = "chaine2";

	::swap(s1, s2);
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min( s1, s2 ) = " << ::min( s1, s2 ) << std::endl;
	std::cout << "max( s1, s2 ) = " << ::max( s1, s2 ) << std::endl;

	return 0;
}
