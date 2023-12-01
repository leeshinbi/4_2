#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    auto is_div4 = [](int n) -> bool { return n % 4 == 0; };

    // a. 벡터 생성
    vector<int> V = { 1, 7, 4, 9, 4, 8, 12, 10, 20 };

    // f. count_if를 사용하여 4의 배수 개수 세기 (람다 식 이용)
    int count = count_if(V.begin(), V.end(), is_div4);

    // 결과 출력
    cout << "4의 배수 개수: " << count << endl;

    return 0;
}
