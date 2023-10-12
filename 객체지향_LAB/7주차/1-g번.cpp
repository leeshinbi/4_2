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

    Complex(const Complex& c) {  // 복사 생성자
        real = c.real;
        imag = c.imag;
        cout << "복사 생성자 호출: ";
        print();
    }
};

Complex& add(Complex& c1, Complex& c2) {  // 매개 변수와 반환 값의 타입 변경
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

int main() {
    Complex c1(1, 2), c2(3, 4), t;

    t = add(c1, c2);  // add 함수에 대한 참조 사용
    t.print();

    return 0;
}
