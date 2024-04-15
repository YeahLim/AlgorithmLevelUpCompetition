// 제 12회 알고리즘 스터디
// SWEA D3
// 문제명: [S/W 문제해결 응용] 2일차 - 최대 상금
// 문제번호: 1244번

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string num;
int result, max_cnt;

void dfs(int ptr, int cnt) {
    // 탈출 조건
    if (cnt == max_cnt) {
        result = max(result, stoi(num));
        return;
    }
    for (int i = ptr; i < num.length() - 1; i++) {
        for (int j = i + 1; j < num.length(); j++) {
            if (num[i] <= num[j]) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
            // 무조건 바꾸어야하는 경우
            if (i == num.length() - 2 && j == num.length() - 1) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        cin >> num >> max_cnt;
        result = 0;
        dfs(0, 0);
        cout << "#" << t << " " << result << '\n';
    }

    return 0;
}