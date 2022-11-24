#include "Point.hpp"

Fixed   check(Point const a, Point const b, Point const c) {
    return ((a.getX() - c.getX()) * (b.getY() - c.getY())) - \
            ((b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed c1(check(point, a, b));
    Fixed c2(check(point, b, c));
    Fixed c3(check(point, c, a));
    
    if ((c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0))
        return true;
    return false;
}