
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    ~Rectangle();

    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;

    float calculateArea() const;
};

#endif