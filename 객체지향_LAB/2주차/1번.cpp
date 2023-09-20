#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void swap(int x, int y) {
   int temp = x;
   x = y;
   y = temp;
}
void swap(int* x, int* y) {
   int temp = *x;
   *x = *y;
   *y = temp;
}

int main() {

   int a = 10, b = 20;

   swap(a, b);
   cout << "a=" << a << "\tb=" << b << endl;

   swap(a, b);
   cout << "a=" << a << "\tb=" << b << endl;

   return 0;
}
