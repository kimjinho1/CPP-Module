#include "easyfind.hpp"

int main(void) {
	std::vector<int>			vec;
	std::list<int>				list;
	std::deque<int>				deque;
	std::vector<int>::iterator	v_iter;
	std::list<int>::iterator	l_iter;
	std::deque<int>::iterator	d_iter;

	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
		list.push_back(i);
		deque.push_back(i);
	}
	for (v_iter = vec.begin(); v_iter != vec.end(); v_iter++)
		std::cout << *v_iter << std::endl;
	std::cout << "----------------------" << std::endl;
	for (l_iter = list.begin(); l_iter != list.end(); l_iter++)
		std::cout << *l_iter << std::endl;
	std::cout << "----------------------" << std::endl;
	for (d_iter = deque.begin(); d_iter != deque.end(); d_iter++)
		std::cout << *d_iter << std::endl;
	std::cout << "----------------------" << std::endl;

	try {
		v_iter = easyfind(vec, 2);
		std::cout << "*v_iter: " << *v_iter << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		l_iter = easyfind(list, 10);
		std::cout << "*l_iter: " << *l_iter << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;

	try {
		d_iter = easyfind(deque, 4);
		std::cout << "*d_iter: " << *d_iter << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
