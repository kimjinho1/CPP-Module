#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNumber(0) {
    std::cout << "Default constructor called" << std::endl;
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

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNumber;
}

void    Fixed::setRawBits(int const raw) {
    this->fixedPointNumber = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
