#include <iostream>
using namespace std;

template <typename T>
class Number {
    T num;
public:
    Number(T n) : num(n) {};  
    T getNum();
};

template <typename T>
T Number<T>::getNum() {
    return num;
}

int main() {
    Number<int> a(7);
    Number<double> b(7.7);

    cout << "int Number= " << a.getNum() << endl;
    cout << "double Number = " << b.getNum() << endl;

    return 0;
}
