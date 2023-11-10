#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int val) : a(val) {
        cout << "생성자 A : " << a << endl;
    }
    ~A() {
        cout << "소멸자 A " <<  endl;
    }
};

class B : public A {
    int b;
public:
    B(int val1, int val2) : A(val1), b(val2) {
        cout << "생성자 B : " << b << endl;
    }
    ~B() {
        cout << "소멸자 B" << endl;
    }
};

class C : public B {
    int c;
public:
    C(int val1, int val2, int val3) : B(val1, val2), c(val3) {
        cout << "생성자 C : " << c << endl;
    }
    ~C() {
        cout << "소멸자 C" << endl;
    }
};

int main() {
    C c(10, 20, 30);
    return 0;
}
