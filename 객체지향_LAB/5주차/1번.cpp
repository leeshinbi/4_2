#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // STL 알고리즘을 사용하기 위해 필요한 헤더 파일

int main() {
    // a번
    std::vector<std::string> vec;   

    // b번
    vec.push_back("MILK");
    vec.push_back("BUTTER");
    vec.push_back("BREAD");
    vec.push_back("SALAD");
    vec.push_back("CUCUMBER");   

    // c번
    for (const std::string& item : vec) {
        std::cout << item << std::endl;
    } 

    // d번 
    std::vector<std::string>::iterator p;

    // e번 
    for (p = vec.begin(); p != vec.end(); ++p) {
        std::cout << *p << std::endl;
    }

    // f번
    std::sort(vec.begin(), vec.end());

    // g번 
    for (p = vec.begin(); p != vec.end(); ++p) {
        std::cout << *p << std::endl;
    }

    return 0;
}
