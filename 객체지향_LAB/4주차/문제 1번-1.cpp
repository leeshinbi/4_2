#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

class Circle {
private:
    double radius;

public:
    Circle(double r = 0.0) : radius(r) {
        std::cout << "Circle with radius " << radius << " is created" << std::endl;
    }

    ~Circle() {
        std::cout << "Circle with radius " << radius << " is dying" << std::endl;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    void calcArea() {
        double area = PI * radius * radius;
        std::cout << "Donut’s area: " << area << std::endl;
    }

    void print() {
        std::cout << "Donut’s size : " << radius << std::endl;
    }
};

int main() {
    Circle donut(10);
    donut.print();
    donut.calcArea();

    donut.setRadius(30);
    donut.print();
    donut.calcArea();

    return 0;
}
