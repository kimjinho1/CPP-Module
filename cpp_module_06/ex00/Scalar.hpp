#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>

class Scalar {
private:
	const std::string	str;
	double				d;
	int					wrong;
	int					infOrNan;
	Scalar();
public:
	Scalar(const std::string &str);
	Scalar(const Scalar &other);
	Scalar &operator=(const Scalar &other);
	~Scalar();

	const std::string	getStr() const;
	double				getD() const;
	int					getWrong() const;
	int					getInfOrNan() const;

	void 	printChar() const;
	void	printInt() const;
	void 	printFloat() const;
	void	printDouble() const;
	void	convert(void) const;
};

#endif
