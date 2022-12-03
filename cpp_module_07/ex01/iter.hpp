#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, int length, void (*f)(T const &)) {
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

#endif
