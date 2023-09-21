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

void update(Circle& circle) { // 매개변수를 참조로 받음
    double newRadius = circle.getRadius() * 2;
    circle.setRadius(newRadius);
}

int main() {
    Circle donut(10);
    donut.calcArea();
    donut.print();

    update(donut); // 도넛의 크기를 두 배로 만든다.

    donut.calcArea();
    donut.print();

    return 0;
}
