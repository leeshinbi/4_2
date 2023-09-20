// 다음 출력 화면과 같이 커피를 주문하면 지불해야 할 금액을 출력하는 C++ 프로그램을 작성하라.       
// 커피 종류에는 Espresso, Americano, Cafuccino가 있으며, 각각의 가격은 4000원, 4500원, 5000원이다.   
// 단, C++ String 클래스를 사용하여 문자열을 다루어라. 2개의 문자열이 같은지를 판단할 때 ‘==’ 연산자를 사용하라.   

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> menu = {
        {"Espresso", 4000},
        {"Americano", 4500},
        {"Cafuccino", 5000}
    };

    cout << "Menu: Espresso: 4000, Americano: 4500, Cafuccino: 5000" << endl;

    string item;
    int quantity;

    cout << "what item? >> ";
    getline(cin, item);

    cout << "how many? >> ";
    cin >> quantity;

    if (menu.find(item) == menu.end()) {
        cout << "You have wrong order" << endl;
        return 1;
    }


    int totalAmount = menu[item] * quantity;

    cout << "pay for " << totalAmount << endl;

    return 0;
}
