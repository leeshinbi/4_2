#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto is_div_by(int divisor) {
    return [divisor](int num) -> bool {return (num % divisor == 0);  };
}

int main() {
    vector<int> v = { 1, 7, 4, 9, 4, 8, 12, 10, 20 };
    int a[] = { 3,4,5 };
    int count = 0;

    for (int i : a) {
        count = count_if(v.begin(), v.end(), is_div_by(i));
        cout << "number divisible by " << i << ": " << count << endl;
    }

    return 0;
}
