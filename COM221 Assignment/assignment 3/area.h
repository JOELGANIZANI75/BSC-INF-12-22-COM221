#include "Area.h"
#include <cmath>

namespace shapes {
    double Area::calculateSquareArea(const Square& square) {
        double side = square.getSideLength();
        return side * side;
    }

    double Area::calculateTriangleArea(const Triangle& triangle) {
        double base = triangle.getBase();
        double height = triangle.getHeight();
        return 0.5 * base * height;
    }

    double Area::calculateCircleArea(const Circle& circle) {
        double radius = circle.getRadius();
        return M_PI * radius * radius;
    }
}