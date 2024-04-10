// 제 12회 알고리즘 스터디
// SWEA D3
// 문제명: 햄버거 다이어트
// 문제번호: 5215번

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N, L;
        cin >> N >> L;

        int dp[21][10001];
        int w[21], v[21];
        for (int i = 1; i <= N; i++) {
            cin >> v[i] >> w[i];
        }

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= L; j++) {
                if (w[i] > j) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    if (v[i] + dp[i - 1][j - w[i]] > dp[i - 1][j]) {
                        dp[i][j] = v[i] + dp[i - 1][j - w[i]];
                    }
                    else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
        }
        cout << "#" << t << " " << dp[N][L] << endl;
    }

    return 0;
}