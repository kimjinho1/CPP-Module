#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>

class Convert {
private:
	const std::string value;
	Convert();
public:
	Convert(std::string const &value);
	~Convert();
	const std::string	getValue() const;
	char 				toChar() const;
	int					toInt() const;
	float 				toFloat() const;
	double 				toDouble() const;

	class ImpossibleException : public std::exception {
		const char *what() const throw();
	};
	class NonDisplayableException : public std::exception {
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Convert const &convert);

#endif