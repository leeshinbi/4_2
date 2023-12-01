#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream inputFile("test.txt");

    vector<string> words;

    if (inputFile.is_open()) {
        string word;
        while (inputFile >> word) {
            words.push_back(word);
        }
        inputFile.close();
    }
    else {
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    // 벡터 정렬
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a < b;
    });

    ofstream outputFile("dict.txt");

    if (outputFile.is_open()) {
        for (const auto& word : words) {
            outputFile << word << endl;
        }
        outputFile.close();
    }
    else {
        cerr << "파일을 생성할 수 없습니다." << endl;
        return 1;
    }

    cout << "생성 완료" << endl;

    return 0;
}
