#include <iostream>
#include "Rectangle.h"

int main() {
    // First instance using default constructor and setter methods
    Rectangle rectangle1;

    float length, width;

    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    rectangle1.setLength(length);

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;
    rectangle1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rectangle1.calculateArea() << std::endl;

    // Second instance using overloaded constructor
    std::cout << "\nEnter the length of the second rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    Rectangle rectangle2(length, width);

    std::cout << "Area of the second rectangle: " << rectangle2.calculateArea() << std::endl;

    return 0;
}