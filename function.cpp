#include <iostream>
#include <cmath> // Required for M_PI constant

class AreaCalculator {
public:
    // 1. Overloaded function for a square (takes one double argument)
    double calculateArea(double side) {
        std::cout << "Calculating area of a square..." << std::endl;
        return side * side;
    }

    // 2. Overloaded function for a rectangle (takes two double arguments)
    double calculateArea(double length, double width) {
        std::cout << "Calculating area of a rectangle..." << std::endl;
        return length * width;
    }

    // 3. Overloaded function for a circle (takes one float argument)
    // We use 'float' here to differentiate its signature from the square's function,
    // which takes a 'double'. The compiler sees calculateArea(double) and
    // calculateArea(float) as two distinct functions.
    double calculateArea(float radius) {
        std::cout << "Calculating area of a circle..." << std::endl;
        return M_PI * radius * radius;
    }
};

int main() {
    // Create an instance of the calculator
    AreaCalculator calculator;

    // --- Call each version of calculateArea() ---

    // Call the version for a square (matches calculateArea(double))
    double squareArea = calculator.calculateArea(5.0);
    std::cout << "Area of the square (side 5.0): " << squareArea << std::endl;
    std::cout << "-----------------------------------" << std::endl;


    // Call the version for a rectangle (matches calculateArea(double, double))
    double rectangleArea = calculator.calculateArea(4.0, 6.0);
    std::cout << "Area of the rectangle (4.0 x 6.0): " << rectangleArea << std::endl;
    std::cout << "-----------------------------------" << std::endl;


    // Call the version for a circle (matches calculateArea(float))
    // We use 3.5f to specify the number is a float literal.
    double circleArea = calculator.calculateArea(3.5f);
    std::cout << "Area of the circle (radius 3.5): " << circleArea << std::endl;

    return 0;
}