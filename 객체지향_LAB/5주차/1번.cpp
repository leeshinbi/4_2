#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // STL 알고리즘을 사용하기 위해 필요한 헤더 파일
using namespace std;

int main() {
    // a번
    vector<string> vec;

    // b번
    vec.push_back("MILK");
    vec.push_back("BUTTER");
    vec.push_back("BREAD");
    vec.push_back("SALAD");
    vec.push_back("CUCUMBER");

    // c번
    for (const string& item : vec) {
        cout << item << endl;
    }

    // d번 
    vector<string>::iterator p;

    // e번 
    for (p = vec.begin(); p != vec.end(); ++p) {
        cout << *p << endl;
    }

    // f번
    sort(vec.begin(), vec.end());

    // g번 
    for (p = vec.begin(); p != vec.end(); ++p) {
        cout << *p << endl;
    }

    return 0;
}
