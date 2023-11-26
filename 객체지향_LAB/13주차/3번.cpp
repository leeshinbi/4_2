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
};

template <class T>
T larger(T a, T b) {
    return (a >= b) ? a : b;
}

string larger(Circle& a, Circle& b) {
    if (a.getRadius() >= b.getRadius()) {
        return a.getName();
    }
    else {
        return b.getName();
    }
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
