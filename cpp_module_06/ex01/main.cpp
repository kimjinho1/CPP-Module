#include "Data.hpp"

int main() {
	Data		*data1 = new Data;
	Data		*data2;
	uintptr_t	raw;

	data1->setN(10);
	std::cout << "data1->n: " << data1->getN() << std::endl;
	raw = serialize(data1);
	std::cout << "raw: " << raw << std::endl;
	data2 = deserialize(raw);
	std::cout << "data2->n: " << data2->getN() << std::endl << std::endl;
	delete data1;

	int		*a = new int(1000);
	long 	*aPtr1;
	int		*a1;

	aPtr1 = reinterpret_cast<long*>(a);
	std::cout << "*a: " << *a << std::endl;
	std::cout << "aPtr1: " << aPtr1 << std::endl;
	std::cout << "*aPtr1: " << *aPtr1 << std::endl;
	a1 = reinterpret_cast<int*>(aPtr1);
	std::cout << "*a1: " << *a1 << std::endl << std::endl;
	delete a;

	char	*aPtr2;
	int		*a2;

	aPtr2 = reinterpret_cast<char*>(a);
	std::cout << "*a: " << *a << std::endl;
	std::cout << "aPtr2: " << aPtr2 << std::endl;
	std::cout << "*aPtr2: " << *aPtr2 << std::endl;
	a2 = reinterpret_cast<int*>(aPtr2);
	std::cout << "*a2: " << *a2 << std::endl;

	//char	aPtr3;
	//aPtr3 = reinterpret_cast<char>(a);
	return 0;
}
