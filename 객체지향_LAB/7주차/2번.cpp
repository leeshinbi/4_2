#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person { // a , person 객체를 c++ 클래스 구조로 정의 
public:
    Person(const string& name, int age) : name(name), age(age) {}
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }

private:
    string name;
    int age;
};

// 비교 함수 정의
bool compareByAge(const Person& p1, const Person& p2) {
    return p1.getAge() < p2.getAge();
}

int main() { // e , 주어진 출력에 맞게 main() 함수 작성 
    vector<Person> v; // b , 동적 생성된 person 객체를 저장하는 벡터 v 생성

    char response;

    do {
        string name;
        int age;

        cout << "이름 입력: ";
        cin >> name;
        cout << "나이 입력: ";
        cin >> age;

        v.push_back(Person(name, age)); // c, person 객체를 동적 생성하여 b)의 v에 저장

        cout << "계속 입력하시겠습니까? (y/n): ";
        cin >> response;
    } while (response == 'y' || response == 'Y');

    
    sort(v.begin(), v.end(), compareByAge);  // d , STL 알고리즘 sort()를 이용하여 벡터에 포함된 객체를 정렬

    // 정렬된 결과 출력
    cout << "나이 순으로 정렬된 결과:" << std::endl;
    for (const Person& person : v) {
        cout << "이름: " << person.getName() << ", 나이: " << person.getAge() << std::endl;
    }

    return 0;
}
