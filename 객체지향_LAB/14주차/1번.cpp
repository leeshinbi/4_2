#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 파일 이름
    string filename = "test.txt";

    // 파일 열기
    ifstream file(filename);

    // 파일이 열렸는지 확인
    if (!file.is_open()) {
        cerr << "파일을 열 수 없습니다: " << filename << endl;
        return 1; // 오류 코드 반환
    }

    // 파일에서 줄 단위로 읽어오기
    string line;
    while (getline(file, line)) {
        // 읽어온 줄을 표준 출력에 출력
        cout << line << endl;
    }

    // 파일 닫기
    file.close();

    return 0; // 프로그램 정상 종료
}
