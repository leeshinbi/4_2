#include <iostream>
#include <vector>
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
    int c;
public:
    C() {
        c = 0;
        cout << "생성자 C : " << c << endl;
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
    vector<A*> objects; // 벡터 생성

    A* a = new A();
    B* b = new B();
    C* c = new C();

    objects.push_back(a);
    objects.push_back(b);
    objects.push_back(c);

    // 벡터에 저장된 객체의 f() 및 v() 함수 호출
    for (A* obj : objects) {
        obj->f();
        obj->v();
    }

    // 벡터에 저장된 객체의 메모리 해제
    for (A* obj : objects) {
        delete obj;
    }

    return 0;
}
