#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(Fixed const x, Fixed const y);
    Point(const Point &other);
    Point &operator=(const Point &other);
    ~Point();
    Fixed   getX(void) const;
    Fixed   getY(void) const;

    bool    bsp(Point const p, Point const x, Point const y);
};

#endif