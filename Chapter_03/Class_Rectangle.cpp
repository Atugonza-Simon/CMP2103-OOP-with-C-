#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle() : width(0.0), length(0.0) {}

    void setWidth(double rectangleWidth) {
        width = rectangleWidth;
    }

    void setLength(double rectangleLength) {
        length = rectangleLength;
    }

    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    double area() const {
        return width * length;
    }

    double perimeter() const {
        return 2.0 * (width + length);
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setWidth(5.0);
    rectangle.setLength(3.0);

    std::cout << "Width: " << rectangle.getWidth() << '\n'
              << "Length: " << rectangle.getLength() << '\n'
              << "Area: " << rectangle.area() << '\n'
              << "Perimeter: " << rectangle.perimeter() << '\n';

    Rectangle secondRectangle;
    secondRectangle.setWidth(7.5);
    secondRectangle.setLength(4.0);

    std::cout << "\nSecond rectangle\n"
              << "Width: " << secondRectangle.getWidth() << '\n'
              << "Length: " << secondRectangle.getLength() << '\n'
              << "Area: " << secondRectangle.area() << '\n'
              << "Perimeter: " << secondRectangle.perimeter() << '\n';

    return 0;
}