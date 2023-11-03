//10주차 첫번째 장 
//1번의 c 
#include <iostream>
using namespace std;

class Complex {
    double re, im;
public:
    Complex(double r = 0.0, double i = 0.0) {
        re = r; im = i;
    }

    Complex operator+(const Complex& other) {
        Complex temp;
        temp.re = re + other.re;
        temp.im = im + other.im;
        return temp;
    }

    Complex& operator+=(const Complex& other) {
        re += other.re;
        im += other.im;
        return *this;
    }

    void show() {
        cout << re << " + " << im << "i" << endl;
    }
};

int main() {
    Complex c1(1, 2), c2(3, 4), c3;

    c3 = c1 + c2;
    cout << "\nAfter +: ";
    c3.show();

    c3 += c1;
    cout << "\nAfter +=: ";
    c3.show();

    return 0;
}
