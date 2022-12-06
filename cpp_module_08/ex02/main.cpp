#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> mstack;

	for (int i = 0; i < 10; i++)
		mstack.push(i);
	std::cout << "mstack size: " << mstack.size() << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "mstack top: " << mstack.top() << std::endl;
		mstack.pop();
	}
	std::cout << "mstack empty: " << mstack.empty() << std::endl;
	std::cout << "----------------------" << std::endl;

	for (int i = 0; i < 10; i++)
		mstack.push(i);
	MutantStack<int>::iterators	start;
	MutantStack<int>::iterators	end = mstack.end();
	for (start = mstack.begin(); start != end; start++)
		std::cout << "*iter: " << *start << std::endl;
	std::cout << "----------------------" << std::endl;

	MutantStack<std::string> mstack2;

	mstack2.push("Good");
	mstack2.push("Bye");
	mstack2.push("Cpp");
	mstack2.push("Module");
	mstack2.push("!!!");
	std::cout << "mstack2 size: " << mstack2.size() << std::endl;
	MutantStack<std::string>::iterators	start2;
	MutantStack<std::string>::iterators	end2 = mstack2.end();
	for (start2 = mstack2.begin(); start2 != end2; start2++)
		std::cout << *start2 << " ";
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;

	return 0;
}
