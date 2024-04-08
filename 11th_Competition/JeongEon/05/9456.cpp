// 코딩 테스트 스터디 11회차
// 난이도: 실버 1
// 문제번호: 9465번
// 문제이름: 스티커

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        long long int sticker[2][100001];
        for (int j = 0; j < 2; j++) {
            for (int k = 1; k < n + 1; k++) {
                cin >> sticker[j][k];
            }
        }

        long long int dp[2][100001];
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = sticker[0][1];
        dp[1][1] = sticker[1][1];

        for (int j = 2; j < n + 1; j++) {
            dp[0][j] = max(dp[1][j - 2], dp[1][j - 1]) + sticker[0][j];
            dp[1][j] = max(dp[0][j - 2], dp[0][j - 1]) + sticker[1][j];
        }

        cout << max(dp[0][n], dp[1][n]) << '\n';
    }

    return 0;
}