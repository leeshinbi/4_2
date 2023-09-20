// 2)의 문제를 다음과 같이 확장하라: 하루 목표 매출 금액을 입력받고, 매출이 목표 매출 금액을 넘어서면    
// 카페를 닫는다. 실행 예는 다음과 같다. 문제를 분석, 알고리즘 작성, 코딩, 테스트의 순서로 해결하라.

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Menu: Espresso: 4000, Americano: 4500, Cafuccino: 5000" << endl;

    int goalAmount;
    cout << "enter goal amount today: ";
    cin >> goalAmount;

    int totalEarned = 0;

    while (totalEarned <= goalAmount) {
        string item;
        int quantity;

        cout << "what item ? >> ";
        cin.ignore(); // newline character 제거
        getline(cin, item);

        int price = 0;

        if (item == "Espresso") {
            price = 4000;
        }
        else if (item == "Americano") {
            price = 4500;
        }
        else if (item == "Cafuccino") {
            price = 5000;
        }
        else {
            cout << "You have wrong order" << endl;
            continue;
        }

        cout << "how many ? >> ";
        cin >> quantity;

        int orderAmount = price * quantity;
        totalEarned += orderAmount;

        cout << "pay for " << orderAmount << endl;
    }

    if (totalEarned > goalAmount) {
        cout << "\nGreat Job! You earned " << totalEarned << endl;
    }
    else {
        cout << "\nCafe is closing. You earned " << totalEarned << endl;
    }

    return 0;
}
