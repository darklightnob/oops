#include <iostream>

using namespace std;

class AreaCalculator {
public:
    double calculateArea(double side) {
        cout << "Calculating area of a square..." << endl;
        return side * side;
    }

    double calculateArea(double length, double width) {
        cout << "Calculating area of a rectangle..." << endl;
        return length * width;
    }

    double calculateArea(float radius) {
        cout << "Calculating area of a circle..." << endl;
        return (22.0/7) * radius * radius;
    }
};

int main() {
    AreaCalculator calculator;

    double squareArea = calculator.calculateArea(5.0);
    cout << "Area of the square (side 5.0): " << squareArea << endl;
    cout << "-----------------------------------" << endl;

    double rectangleArea = calculator.calculateArea(4.0, 6.0);
    cout << "Area of the rectangle (4.0 x 6.0): " << rectangleArea << endl;
    cout << "-----------------------------------" << endl;

    double circleArea = calculator.calculateArea(3.5f);
    cout << "Area of the circle (radius 3.5): " << circleArea << endl;

    return 0;
}