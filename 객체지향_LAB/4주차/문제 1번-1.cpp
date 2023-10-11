#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

class Circle {
private:
    double radius;
public:
    Circle(double r = 0.0) : radius(r) {
        cout << "Circle with radius" << radius << "is created" << endl;
    }
    ~Circle() {
        cout << "Circle with radius" << radius << "is Dying" << endl;
    }

    void setRadius(double r) {
        radius = r;
    }

    void calcArea() {
        double area = PI * radius * radius;
        cout << "Donut's area" << area << endl;
    }

    void print() {
        cout << "Donut's size" << radius << endl;
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
