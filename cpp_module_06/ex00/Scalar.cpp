#include "Scalar.hpp"

Scalar::Scalar() : str(""), wrong(false), infOrNan(false) {}

Scalar::Scalar(const std::string &str) : str(str), wrong(false), infOrNan(false) {
	if (!std::isdigit(str[0]) && str.length() == 1)
		d = static_cast<double>(str[0]);
	else
		d = atof(str.c_str());
	if (d == 0 && str[0] != '0')
		wrong = true;
	if (isnan(d) || isinf(d))
		infOrNan = true;
}

Scalar::Scalar(const Scalar &other) : str(other.getStr()) {
	*this = other;
}

Scalar	&Scalar::operator=(const Scalar &other) {
	if (this != &other)
	{
		d = other.getD();
		wrong = other.getWrong();
		infOrNan = other.getInfOrNan();
	}
	return *this;
}

Scalar::~Scalar() {}

const std::string	Scalar::getStr() const {
	return str;
}

double	Scalar::getD() const {
	return d;
}

int	Scalar::getWrong() const {
	return wrong;
}

int	Scalar::getInfOrNan() const {
	return infOrNan;
}

void	Scalar::printChar() const {
	if (wrong || infOrNan || d < 0 || d > 127)
		std::cout << "char: impossible" << std::endl;
	else if (d > 31 && d < 127)
		std::cout << "char: '"  << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	Scalar::printInt() const {
	if (wrong || infOrNan || d > std::numeric_limits<int>::max() || 
		d < std::numeric_limits<int>::lowest())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
}

void	Scalar::printFloat() const {
	if (wrong || (!infOrNan && (d > std::numeric_limits<float>::max() || 
		d < std::numeric_limits<float>::lowest())))
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	float	f = static_cast<float>(d);
	std::cout << "float: " << f;
	if (!infOrNan && (str.find('.') == std::string::npos || 
			f - static_cast<int>(f) == 0))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Scalar::printDouble() const {
	if (wrong == true || (!infOrNan && (d > std::numeric_limits<double>::max() || 
		d < std::numeric_limits<double>::lowest())))
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	std::cout << "double: " << d;
	if (!infOrNan && (str.find('.') == std::string::npos || 
			d - static_cast<int>(d) == 0))
		std::cout << ".0";
	std::cout << std::endl;
}

void	Scalar::convert(void) const {
	printChar();
	printInt();
	printFloat();
	printDouble();
}
