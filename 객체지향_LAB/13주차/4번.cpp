#include <iostream>
#include <string>
using namespace std;

class Circle {
    string name;
    double radius;

public:
    Circle(string name, double radius) : name(name), radius(radius) {}
    double getRadius() { return radius; }
    string getName() { return name; }

    bool operator > (Circle& other) {
        return radius > other.radius;
    }

    friend ostream& operator<<(ostream& os, const Circle& circle) {
        os << circle.name;
        return os;
    }
};

template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << larger(5, 6) << endl;
    cout << larger('A', 'B') << endl;
    cout << larger(5.6, 3.2) << endl;
    cout << larger("Hello", "Happy") << endl;

    Circle waffle("Waffle", 10), pizza("Pizza", 20);
    cout << larger(waffle, pizza) << endl;

    return 0;
}
