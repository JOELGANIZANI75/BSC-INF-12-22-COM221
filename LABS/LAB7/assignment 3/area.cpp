#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static double calculateSquareArea(const Square& square);
        static double calculateTriangleArea(const Triangle& triangle);
        static double calculateCircleArea(const Circle& circle);
    };
}

#endif