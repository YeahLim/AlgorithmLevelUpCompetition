// 백준 알고리즘 스터디 5회차
// 문제 번호: 9935번
// 문제 이름: 문자열 폭발
// 알고리즘: 스택
// 작성일: ~24.02.22

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 입력
    string input;   // 문자열
    cin >> input;

    string bomb;    // 폭발 문자열
    cin >> bomb;

    string result;  // 결과

    for (int i = 0; i < input.size(); i++) {
        result.push_back(input[i]);
        if (result.back() == bomb.back()) {
            if (result.size() >= bomb.size()) {
                if (result.substr(result.size() - bomb.size(), bomb.size()) == bomb) {
                    result.erase(result.size() - bomb.size(), bomb.size());
                }
            }
        }
    }

    if (result.size() <= 0) {
        cout << "FRULA" << endl;
    }
    else {
        cout << result << endl;
    }

    return 0;
}
