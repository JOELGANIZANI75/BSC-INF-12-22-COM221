#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace shapes;

int main() {
    char choice;

    do {
        std::cout << "Choose an option:\n"
                  << "1. Calculate the area of a square\n"
                  << "2. Calculate the area of a triangle\n"
                  << "3. Calculate the area of a circle\n"
                  << "4. Quit\n";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;

                Square square(side);
                std::cout << "Area of the square: " << Area::calculateSquareArea(square) << std::endl;
                break;
            }
            case '2': {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;

                Triangle triangle(base, height);
                std::cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << std::endl;
                break;
            }
            case '3': {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;

                Circle circle(radius);
                std::cout << "Area of the circle: " << Area::calculateCircleArea(circle) << std::endl;
                break;
            }
            case '4':
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != '4');

    return 0;
}