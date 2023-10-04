#include <iostream>
#include <vector>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        std::cout << "Crying" << std::endl;
    }

    ~Circle() {
        std::cout << "Dying" << std::endl;
    }

    double getRadius() const {
        return radius;
    }
};

int main() {
    std::vector<Circle> v;

    for (int i = 1; i < 4; i++) {
        Circle c(i);
        v.push_back(c);
    }

    for (const auto& c : v) {
        std::cout << c.getRadius() << std::endl;
    }

    return 0;
}
