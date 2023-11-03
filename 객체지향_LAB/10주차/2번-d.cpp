//2번의 d번

#include <iostream>
using namespace std;

class Complex {
    double re, im;
public:
    Complex(double r = 0.0, double i = 0.0) {
        re = r;
        im = i;
    }

    void show() {
        cout << re << " + " << im << "i";
    }
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend Complex& operator++(Complex& c);
    friend Complex operator++(Complex& c, int);
};

Complex& operator++(Complex& c) {
    // 전위 증가 연산자
    c.re++;
    c.im++;
    return c;
}

Complex operator++(Complex& c, int) {
    // 후위 증가 연산자
    Complex temp(c);
    c.re++;
    c.im++;
    return temp;
}

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.re << " + " << c.im << "i";
    return out;
}

int main() {
    Complex c1(1, 2), c2;
    cout << c1 << endl;
    cout << c2 << endl;

    ++c1;
    cout << "\nAfter prefix++: " << endl;
    cout << c1 << " ";

    c2 = c1++;
    cout << c2 << endl;

    cout << "\nAfter postfix++: " << endl;
    cout << c1 << " " << c2 << endl;

    return 0;
}
