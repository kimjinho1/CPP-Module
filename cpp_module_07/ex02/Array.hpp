#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#define MAX_VAL 5

template <typename T>
class Array {
private:
	T				*array;
	unsigned int	_size;
public:
	Array<T>() : _size(0) {
		array = new T[_size];
	}

	Array<T>(std::size_t n) : _size(n) {
		array = new T[_size];
	}

	Array<T>(Array<T> const &other) : _size(other.size()) {
		array = new T[_size];
		for (std::size_t i = 0; i < _size; i++)
			array[i] = other.array[i];
	}

	Array<T> &operator=(Array<T> const &other) {
		if (this != &other)
		{
			if (array != NULL)
				delete [] array;
			_size = other.size();
			array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				array[i] = other.array[i];
		}
		return *this;
	}

	~Array<T>() {
		if (array != NULL)
			delete[] array;
	}

	T &operator[](std::size_t i) {
		if (i < 0 || i >= _size || array == NULL)
			throw WrongIndexException();
		return array[i];
	}

	T const &operator[](std::size_t i) const {
		if (i < 0 || i >= _size || array == NULL)
			throw WrongIndexException();
		return array[i];
	}

	unsigned int	size(void) const {
		return _size;
	}

	class WrongIndexException : public std::exception {
		public:
			const char	*what(void) const throw() {
				return "Wrong Index Error";
			}
	};
};

#endif
