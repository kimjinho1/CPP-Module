#ifndef MUTANTSTACK 
# define MUTANTSTACK 

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const &other) : std::stack<T>(other) {}
	MutantStack &operator=(MutantStack const &other) {
		if (this != &other)
			std::stack<T>::operator=(other);
		return *this;
	}
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator				iterators;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;

	iterators begin(void) {
		return std::stack<T>::c.begin();
	}

	iterators end(void) {
		return std::stack<T>::c.end();
	}
};

#endif
