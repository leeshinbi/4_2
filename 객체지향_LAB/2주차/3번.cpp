#include <iostream>
using namespace std;

void draw(int n = 7) {
    cout << "n = " << n << endl;
    cout << "=======================" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int k = i + 1; k <= n; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n" << endl;
}

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;
    draw(n);
    draw();

    return 0;
}
