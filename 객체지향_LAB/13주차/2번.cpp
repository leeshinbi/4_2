#include <iostream>
using namespace std;

template <typename T>
T larger(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	cout << larger<int>(5, 6) << endl;
	cout << larger<char>('A', 'B') << endl;
	cout << larger<double>(5.6, 3.2) << endl;
	cout << larger<string>("Hello", "Happy") << endl;

	return 0;
}
