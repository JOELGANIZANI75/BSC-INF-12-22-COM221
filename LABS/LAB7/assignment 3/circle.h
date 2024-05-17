#include "Circle.h"

namespace shapes {
    Circle::Circle() : radius(0.0) {}

    Circle::Circle(double radius) : radius(radius) {}

    Circle::~Circle() {}

    void Circle::setRadius(double radius) {
        this->radius = radius;
    }

    double Circle::getRadius() const {
        return radius;
    }
}