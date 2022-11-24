#include "Point.hpp"

int main(void) {
    Point   a(0, 0);
    Point   b(0, 16);
    Point   c(16, 0);
    Point   point1(4, 4);
    Point   point2(16, 0);
    Point   point3(10, 10);

    std::cout << bsp(a, b, c, point1) << std::endl;
    std::cout << bsp(a, b, c, point2) << std::endl;
    std::cout << bsp(a, b, c, point3) << std::endl;
    return 0;
}