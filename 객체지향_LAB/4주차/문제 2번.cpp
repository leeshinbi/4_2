#include <iostream>
using namespace std;

class Circle {
private:
    int radius;

public:
    Circle(int r=0) : radius(r) {
        cout << "Circle with " << this->radius << " is created" << endl;
    }
    ~Circle() {
        cout << "Circle with " << this->radius << " is dying" << endl;
    }

    void print() {
        cout << "radius: " << radius << endl;
    }
    void setRadius(int r) {
        radius = r;
    }
};

int main() {
    Circle arrCir[3];
    for (Circle c : arrCir)
        c.setRadius(rand() % 100 + 1);

    for (Circle c : arrCir)
        c.print();

    return 0;
}

\
