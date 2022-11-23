#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fixedPointNumber;
    static const int    fractionalBits = 8;
public:
    Fixed();
    Fixed(const int n);
    Fixed(const float f);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    int     getRawBits() const;
    void    setRawBits(int raw);
    int     toInt() const;
    float   toFloat() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif