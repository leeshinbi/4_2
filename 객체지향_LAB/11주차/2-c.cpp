#include <iostream>
using namespace std;

class A {
    int a;
public:
    A() {
        a = 0;
        cout << "생성자 A : " << a << endl;
    }
    virtual ~A() {
        cout << "소멸자 A : " << endl;
    }
    void f() {
        cout << "f() in A " << endl;
    }
    virtual void v() {
        cout << "v() in A " << endl;
    }
};



class B : public A {
    int b;
public:
    B() {
        b = 0;
        cout << "생성자 B : " << b << endl;
    }
    ~B() {
        cout << "소멸자 B : " << endl;
    }
    void f() {
        cout << "f() in B " << endl;
    }
    void v() {
        cout << "v() in B " << endl;
    }
};

class C : public B {
    int b;
public:
    C() {
        b = 0;
        cout << "생성자 C : " << b << endl;
    }
    ~C() {
        cout << "소멸자 C : " << endl;
    }
    void f() {
        cout << "f() in C " << endl;
    }
    void v() {
        cout << "v() in C " << endl;
    }
};

int main() {
    A a;
    B b;
    C c;

    A* pa;
    C* pc;

    pa = &b;
    cout << "1" << endl;
    pa->f();         //(1)
    cout << "2" << endl;
    pa->v();         //(2)

    pc = new C();
    pa = pc;
    cout << "3" << endl;
    pa->f();         //(3)
    cout << "4" << endl;
    pa->v();         //(4)
    cout << "5" << endl;
    delete pa;         //(5)
    cout << "ss" << endl;

    return 0;
}
