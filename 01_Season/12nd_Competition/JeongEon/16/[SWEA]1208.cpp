// 제 12회 알고리즘 스터디
// SWEA D3
// 문제명: [S/W 문제해결 기본] 1일차 - Flatten
// 문제번호: 1208번

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_dump;
vector<int> vec;

void dumping(int cnt) {
    sort(vec.begin(), vec.end());

    // 탈출 조건
    if (cnt >= max_dump) {
        return;
    }

    vec[99]--;
    vec[0]++;
    dumping(cnt + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int t = 1; t <= 10; t++) {
        cin >> max_dump;

        int input;
        vec.clear();
        for (int i = 0; i < 100; i++) {
            cin >> input;
            vec.push_back(input);
        }

        dumping(0);

        int result = vec[99] - vec[0];

        cout << "#" << t << " " << result << '\n';
    }

    return 0;
}