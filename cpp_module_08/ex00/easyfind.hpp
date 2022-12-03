#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class NotFountException : public std::exception {
	public:
		const char *what() const throw() {
			return "Error: Value not found!";
		}
};

template <typename T>
typename T::iterator	easyfind(T &t, int n) {
	typename T::iterator iter = std::find(t.begin(), t.end(), n);
	if (iter == t.end())
		throw NotFountException();
	return iter;
}

#endif
