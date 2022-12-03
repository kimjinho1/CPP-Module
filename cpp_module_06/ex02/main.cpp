#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	int	n;

	std::srand((unsigned int)time(NULL));
	n = std::rand() % 3;
	switch (n) {
	case 0:
		std::cout << "A Generated" << std::endl;
		return new A();
	case 1:
		std::cout << "B Generated" << std::endl;
		return new B();
	case 2:
		std::cout << "C Generated" << std::endl;
		return new C();
	default:
		break;
	}
	return NULL;
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Type is C" << std::endl;
	else
		std::cout << "Wrong Type Error" << std::endl;
}

void	identify(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
}

int main() {
	Base*	test1 = generate();
	identify(test1);
	identify(*test1);

	delete test1;
	return 0;
}
