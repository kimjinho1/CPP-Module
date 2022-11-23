#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNumber(0) {
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int n) {
    this->fixedPointNumber = (n << this->fractionalBits);
    std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float f) {
    this->fixedPointNumber = std::roundf(f * (1 << this->fractionalBits));
    std::cout << "Float constructor called" << std::endl;
};

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(Fixed const &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixedPointNumber = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return this->fixedPointNumber;
}

void    Fixed::setRawBits(int const raw) {
    this->fixedPointNumber = raw;
}

int     Fixed::toInt() const {
    return this->fixedPointNumber >> this->fractionalBits;
}

float   Fixed::toFloat() const {
    return static_cast<float>(this->fixedPointNumber) / (1 << this->fractionalBits);
}

Fixed   Fixed::operator++(int) {
    Fixed fixed(*this);
    this->fixedPointNumber++;
    return fixed;
}

Fixed   &Fixed::operator++() {
    this->fixedPointNumber++;
    return *this;
}

Fixed   Fixed::operator--(int) {
    Fixed fixed(*this);
    this->fixedPointNumber--;
    return fixed;
}

Fixed   &Fixed::operator--() {
    this->fixedPointNumber--;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed &Fixed)
{
    out << Fixed.toFloat();
    return out;
}