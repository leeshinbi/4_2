
//10주차 두번째 장 
//2번의 c번 


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

    Complex& operator++() {
        // 전위 증가 연산자
        re++;
        im++;
        return *this;
    }

    Complex operator++(int) {
        // 후위 증가 연산자
        Complex temp(*this);
        re++;
        im++;
        return temp;
    }

    friend ostream& operator<<(ostream& out, const Complex& c);
};

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.re << " + " << c.im << "i";
    return out;
}

int main() {
    Complex c1(1, 2), c2;
    cout << c1 << endl;
    cout << c2 << endl;

    c2 = ++c1;
    cout << "\nAfter prefix++: " << endl;
    cout << c1 << " " << c2 << endl;

    c2 = c1++;
    cout << "\nAfter postfix++: " << endl;
    cout << c1 << " " << c2 << endl;

    return 0;
}
