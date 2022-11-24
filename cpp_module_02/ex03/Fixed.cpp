#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNumber(0) {};

Fixed::Fixed(const int n) {
    this->fixedPointNumber = (n << this->fractionalBits);
};

Fixed::Fixed(const float f) {
    this->fixedPointNumber = std::roundf(f * (1 << this->fractionalBits));
};

Fixed::Fixed(Fixed const &other) {
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    if (this != &other)
        this->fixedPointNumber = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {};

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

Fixed   &Fixed::operator++() {
    this->fixedPointNumber++;
    return *this;
}

Fixed   Fixed::operator++(int) {
    Fixed fixed(*this);
    this->fixedPointNumber++;
    return fixed;
}

Fixed   &Fixed::operator--() {
    this->fixedPointNumber--;
    return *this;
}

Fixed   Fixed::operator--(int) {
    Fixed fixed(*this);
    this->fixedPointNumber--;
    return fixed;
}

bool Fixed::operator<(Fixed const &ref) const {
    return this->getRawBits() < ref.getRawBits();
}

bool Fixed::operator>(Fixed const &ref) const {
    return this->getRawBits() > ref.getRawBits();
}

bool Fixed::operator<=(Fixed const &ref) const {
    return this->getRawBits() <= ref.getRawBits();
}

bool Fixed::operator>=(Fixed const &ref) const {
    return this->getRawBits() >= ref.getRawBits();
}

bool Fixed::operator==(Fixed const &ref) const {
    return this->getRawBits() == ref.getRawBits();
}

bool Fixed::operator!=(Fixed const &ref) const {
    return this->getRawBits() != ref.getRawBits();
}

Fixed   Fixed::operator+(Fixed const &ref) const {
    Fixed fixed(this->toFloat() + ref.toFloat());
    return fixed;
}

Fixed   Fixed::operator-(Fixed const &ref) const {
    Fixed fixed(this->toFloat() - ref.toFloat());
    return fixed;
}

Fixed   Fixed::operator*(Fixed const &ref) const {
    Fixed fixed(this->toFloat() * ref.toFloat());
    return fixed;
}

Fixed   Fixed::operator/(Fixed const &ref) const {
    Fixed fixed(this->toFloat() / ref.toFloat());
    return fixed;
}

Fixed&  Fixed::max(Fixed &ref1, Fixed &ref2) {
    if (ref1 <= ref2)
        return ref2;
    return ref1;
}

const Fixed& Fixed::max(Fixed const &ref1, Fixed const &ref2) {
    if (ref1 <= ref2)
        return ref2;
    return ref1;
}

Fixed&  Fixed::min(Fixed &ref1, Fixed &ref2) {
    if (ref1 >= ref2)
        return ref2;
    return ref1;
}

const Fixed& Fixed::min(Fixed const &ref1, Fixed const &ref2) {
    if (ref1 >= ref2)
        return ref2;
    return ref1;
}

std::ostream& operator<<(std::ostream& out, const Fixed &Fixed)
{
    out << Fixed.toFloat();
    return out;
}
