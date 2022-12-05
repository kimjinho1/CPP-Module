#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	T	t;

	t = a;
	a = b;
	b = t;
}

template <typename T>
T	min(const T &a, const T &b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T	max(const T &a, const T &b) {
	if (a > b)
		return a;
	return b;
}

#endif
