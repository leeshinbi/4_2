#include <iostream>
using namespace std;

template <typename T>
T larger(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	cout << larger(5, 6) << endl;
	cout << larger('A', 'B') << endl;
	cout << larger(5.6, 3.2) << endl;
	cout << larger("Hello", "Happy") << endl;

	return 0;
}
