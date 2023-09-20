#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int main() {
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int b[] = { 1,2,3,4,5,6,7,8,9,10,11 };

    reverse(a, 10);
    reverse(b, 11);

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 11; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
