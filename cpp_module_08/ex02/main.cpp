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
	MutantStack<int>::iterators	start = mstack.begin();
	MutantStack<int>::iterators	end = mstack.end();

	std::cout << "*start: " << *start << std::endl;
	start++;
	std::cout << "*start: " << *start << std::endl;
	start--;
	std::cout << "*start: " << *start << std::endl;
	std::cout << "----------------------" << std::endl;
	for (; start != end; start++)
		std::cout << "*start: " << *start << std::endl;
	std::cout << "----------------------" << std::endl;

	MutantStack<std::string> mstack2;

	mstack2.push("Good");
	mstack2.push("Bye");
	mstack2.push("Cpp");
	mstack2.push("Module");
	mstack2.push("!!!");
	std::cout << "mstack2 size: " << mstack2.size() << std::endl;
	std::cout << "----------------------" << std::endl;

	MutantStack<std::string>::const_iterator	start2 = mstack2.cbegin();
	MutantStack<std::string>::const_iterator	end2 = mstack2.cend();

	std::cout << "*start2: " << *start2 << std::endl;
	start2++;
	std::cout << "*start2: " << *start2 << std::endl;
	start2--;
	std::cout << "*start2: " << *start2 << std::endl;
	std::cout << "----------------------" << std::endl;

	for (; start2 != end2; start2++)
		std::cout << *start2 << " ";
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;

	MutantStack<int>	s(mstack);
	std::cout << "s size: " << s.size() << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "s top: " << s.top() << std::endl;
		s.pop();
	}
	std::cout << "s empty: " << s.empty() << std::endl;
	std::cout << "----------------------" << std::endl;

	MutantStack<int>	s2 = mstack;
	std::cout << "s2 size: " << s2.size() << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "s2 top: " << s2.top() << std::endl;
		s2.pop();
	}
	std::cout << "s2 empty: " << s2.empty() << std::endl;
	return 0;
}
