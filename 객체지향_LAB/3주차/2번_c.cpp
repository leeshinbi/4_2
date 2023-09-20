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
    int countSum12 = 0;         // 2개 주사위 합이 12가 나온 횟수
    int countSum7 = 0;          // 2개 주사위 합이 7이 나온 횟수

    // 난수 발생기(seed)를 초기화합니다.
    srand(static_cast<unsigned int>(time(nullptr)));

    Die die1;
    Die die2;

    // 주사위를 1000번 던지고 합을 계산하여 횟수를 셉니다.
    for (int i = 0; i < numThrows; ++i) {
        die1.roll();
        die2.roll();
        int sum = die1.getFace() + die2.getFace();

        if (sum == 12) {
            countSum12++;
        }
        if (sum == 7) {
            countSum7++;
        }
    }

    // 확률을 계산하여 출력합니다.
    double probabilitySum12 = static_cast<double>(countSum12) / numThrows;
    double probabilitySum7 = static_cast<double>(countSum7) / numThrows;

    std::cout << "2개 주사위 합이 12가 나온 확률: " << probabilitySum12 << std::endl;
    std::cout << "2개 주사위 합이 7이 나온 확률: " << probabilitySum7 << std::endl;

    // 수학적 확률과 비교
    std::cout << "수학적 확률(합이 12): " << 1.0 / 36.0 << std::endl;
    std::cout << "수학적 확률(합이 7): " << 6.0 / 36.0 << std::endl;

    return 0;
}
