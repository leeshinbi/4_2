// 14주차 4번 - a,b,c,d
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// a. 벡터 생성
vector<int> generateVector() {
    return { 1, 7, 4, 9, 4, 8, 12, 10, 20 };
}

// b. 4의 배수인지를 판단하는 함수
bool is_div4(int n) {
    return n % 4 == 0;
}

int main() {
    // c. 벡터 생성
    vector<int> V = generateVector();

    // c. count_if를 사용하여 4의 배수 개수 세기
    int count = count_if(V.begin(), V.end(), is_div4);

    // 결과 출력
    cout << "4의 배수 개수: " << count << endl;

    return 0;
}
