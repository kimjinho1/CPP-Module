#include "Point.hpp"

Fixed   area(Point const a, Point const b, Point const c) {
    Fixed fixed;

    fixed = ((a.getX() * b.getY()) + (b.getX() * c.getY()) + (c.getX() * a.getY())) - \
        ((b.getX() * a.getY()) + (c.getX() * b.getY()) + (a.getX() * c.getY()));
    if (fixed < 0)
        return fixed / -2;
    return fixed / 2;
}

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed s(area(a, b, c));
    Fixed s1(area(point, b, c));
    Fixed s2(area(a, point, c));
    Fixed s3(area(a, b, point));
    
    if (s1 == 0 || s2 == 0 || s3 == 0)
        return false;
    return s == s1 + s2 + s3;
}