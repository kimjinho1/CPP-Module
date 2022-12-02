#include "Convert.h"

Convert::Convert() : value("") {}

Convert::Convert(const std::string &value) :
	value(value){}

Convert::~Convert() {}

const std::string Convert::getValue() const {
	return value;
}

char Convert::toChar() const {
	int	n;

	try {
		n = std::stoi(value);
		if (n < 0 || n > 255)
			throw ImpossibleException();
	}
	catch (...) {
		throw ImpossibleException();
	}
	if (!isprint(n))
		throw Convert::NonDisplayableException();
	return static_cast<char>(n);
}

int Convert::toInt() const {
	int n;

	try {
		n = std::stoi(value);
	}
	catch (...) {
		throw ImpossibleException();
	}
	return n;
}

float	Convert::toFloat() const {
	float	f;

	try {
		f = std::stof(value);
	}
	catch (...) {
		throw ImpossibleException();
	}
	return f;
}

double	Convert::toDouble() const {
	double	d;

	try {
		d = std::stod(value);
	}
	catch (...) {
		throw ImpossibleException();
	}
	return d;
}

const char *Convert::ImpossibleException::what() const throw() {
	return "impossible";
}

const char *Convert::NonDisplayableException::what() const throw() {
	return "Non displayable";
}

std::ostream &operator<<(std::ostream &out, Convert const &convert) {
	try {
		out << "char: ";
		char	c = convert.toChar();
		out << "'" << c << "'" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		out << "int: ";
		int	n = convert.toInt();
		out << n << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		out << "float: ";
		float	f = convert.toFloat();
		out << f << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		out << "double: ";
		double	d = convert.toDouble();
		out << d << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return out;
}
