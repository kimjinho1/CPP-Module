#include "Point.hpp"

Point::Point() : x(0), y(0) {};

Point::Point(Fixed const x, Fixed const y) : x(x), y(y) {};

Point::Point(Point const &other) {
    *this = other;
}

Point &Point::operator=(const Point &other) {
    if (this != &other)
    {
        const_cast<Fixed&>(this->x) = other.getX();
        const_cast<Fixed&>(this->y) = other.getY();
    }
    return *this;
}

Point::~Point() {};

Fixed   Point::getX(void) const {
    return this->x;
}

Fixed   Point::getY(void) const {
    return this->y;
}