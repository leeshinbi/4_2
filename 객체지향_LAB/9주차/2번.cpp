#include <iostream>
using namespace std;

class T {
   static int a;
   int b;
public:
   T() { a++; }
   int f() { return a; }
   int g() { return b; }
   static int h() { return a; }
   //static int s() { return b; }
};
int T::a = 0;
int main() {
  int count;

  T t1, t2;
  T t3[5];
  T* p = new T[10];

  count = t1.f() + T::h() + t3[0]::f() + (p+3)->f();
  cout << count << endl;
  return 0;
}

//출력결과: 68
//t1, t2 -> a = 2
//t3[5] -> a = 7
//*p = new T[10] -> a = 17
//17 + 17 + 17 + 17 = 68
