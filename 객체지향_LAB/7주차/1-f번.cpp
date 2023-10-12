#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;
    Complex(double r = 0.0, double i = 0.0) : real{ r }, imag{ i } {
        cout << "생성자 호출: ";
        print();
    }
    ~Complex() {
        cout << "소멸자 호출: ";
        print();
    }
    void print() {
        cout << real << "+" << imag << "i" << endl;
    }
    Complex(Complex& c) {
        real = c.real;
        imag = c.imag;
        cout << "복사생성자 호출: ";
        print();
    }
};
Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}
int main() {
    Complex c1(1, 2), c2(3, 4), t;

    t = add(c1, c2);
    t.print();

    return 0;
}
