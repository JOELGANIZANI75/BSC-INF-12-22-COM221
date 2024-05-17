#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rectangle;

    float length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    rectangle.setLength(length);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    rectangle.setWidth(width);

    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}