#include <iostream>
#include <cstdlib> // rand() 함수를 사용하기 위한 헤더 파일
#include <ctime>   // srand() 함수를 사용하기 위한 헤더 파일

class Die {
private:
    int face;

public:
    Die() {
        roll();
    }

    void roll() {
        face = rand() % 6 + 1;
    }

    int getFace() const {
        return face;
    }
};

int main() {
    const int numThrows = 1000; // 주사위를 1000번 던집니다.
    int count = 0;             // 3이 나온 횟수를 세기 위한 변수

    // 난수 발생기(seed)를 초기화합니다.
    srand(static_cast<unsigned int>(time(nullptr)));

    Die myDie;

    // 주사위를 1000번 던지고 3이 나올 때마다 count3를 증가시킵니다.
    for (int i = 0; i < numThrows; ++i) {
        myDie.roll();
        if (myDie.getFace() == 3) {
            count++;
        }
    }

    // 확률을 계산하여 출력합니다.
    double probability = static_cast<double>(count) / numThrows;
    std::cout << "실험으로 얻은 확률: " << probability << std::endl;
    std::cout << "수학적 확률(1/6): " << 1.0 / 6.0 << std::endl;

    return 0;
}
