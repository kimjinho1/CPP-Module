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

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    bool operator<(Fixed const &ref) const;
    bool operator>(Fixed const &ref) const;
    bool operator<=(Fixed const &ref) const;
    bool operator>=(Fixed const &ref) const;
    bool operator==(Fixed const &ref) const;
    bool operator!=(Fixed const &ref) const;

    Fixed operator+(Fixed const &ref) const;
    Fixed operator-(Fixed const &ref) const;
    Fixed operator*(Fixed const &ref) const;
    Fixed operator/(Fixed const &ref) const;

    static Fixed &max(Fixed &ref1, Fixed &ref2);
    static const Fixed &max(Fixed const &ref1, Fixed const &ref2);
    static Fixed &min(Fixed &ref1, Fixed &ref2);
    static const Fixed &min(Fixed const &ref1, Fixed const &ref2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif