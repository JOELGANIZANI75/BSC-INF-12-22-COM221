#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(double base, double height) : base(base), height(height) {}

    Triangle::~Triangle() {}

    void Triangle::setBase(double base) {
        this->base = base;
    }

    void Triangle::setHeight(double height) {
        this->height = height;
    }

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }
}