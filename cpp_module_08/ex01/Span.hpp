#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

class Span {
private:
	unsigned int		_n;
	std::vector<int>	_vec;
	Span();
public:
	Span(unsigned int n);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span();

	unsigned int		getN(void) const;
	std::vector<int>	getVec(void) const;

	class AlreadyFullException : public std::exception {
		public:
			const char *what() const throw();
	};

	class NoSpanException : public std::exception {
		public:
			const char *what() const throw();
	};

	class InsufficientNumberOfComponentException : public std::exception {
		public:
			const char *what() const throw();
	};

	class WorngIndexError : public std::exception {
		public:
			const char *what() const throw();
	};

	void	print(unsigned int start, unsigned int n);
	void	addNumber(int n);
	void	fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan(void);
	int		longestSpan(void);
};

std::ostream &operator<<(std::ostream &out, const Span &span);

#endif
