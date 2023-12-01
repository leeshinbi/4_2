#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 입력 파일 이름
    string inputFileName = "test.txt";

    // 출력 파일 이름
    string outputFileName = "lined.txt";

    // 입력 파일 열기
    ifstream inputFile(inputFileName);

    // 입력 파일이 열렸는지 확인
    if (!inputFile.is_open()) {
        cerr << "입력 파일을 열 수 없습니다: " << inputFileName << endl;
        return 1; // 오류 코드 반환
    }

    // 출력 파일 열기
    ofstream outputFile(outputFileName);

    // 출력 파일이 열렸는지 확인
    if (!outputFile.is_open()) {
        cerr << "출력 파일을 열 수 없습니다: " << outputFileName << endl;
        return 1; // 오류 코드 반환
    }

    // 줄 번호 초기화
    int lineNumber = 1;

    // 파일에서 줄 단위로 읽어와서 처리
    string line;
    while (getline(inputFile, line)) {
        // 출력 파일에 줄 번호와 함께 기록
        outputFile << lineNumber << ": " << line << endl;

        // 줄 번호 증가
        lineNumber++;
    }

    // 파일 닫기
    inputFile.close();
    outputFile.close();

    cout << "프로그램이 정상적으로 실행되었습니다." << endl;

    return 0; // 프로그램 정상 종료
}
