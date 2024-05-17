#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle();
        Circle(double radius);
        ~Circle();

        void setRadius(double radius);
        double getRadius() const;
    };
}

#endif