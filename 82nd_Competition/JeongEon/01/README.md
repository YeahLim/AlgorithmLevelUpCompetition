# \[백준 - 실버 1] 10844. 쉬운 계단 수

## ⏰  **time**

10분

## \:pushpin: **Algorithm**

DP(점화식)

## ⏲️**Time Complexity**

\$O(N \times 10)\$

## \:round\_pushpin: **Logic**

1. 정의: `dp[i][d]` = 길이가 `i`이고 마지막 숫자가 `d`인 계단 수의 개수.
2. 초기값: 한 자리 수는 1\~9만 가능 → `dp[1][1..9] = 1`, `dp[1][0] = 0`.
3. 점화식:

   * `dp[i][0] = dp[i-1][1]`
   * `dp[i][9] = dp[i-1][8]`
   * `dp[i][d] = dp[i-1][d-1] + dp[i-1][d+1]` (1 ≤ d ≤ 8)
     매 단계마다 `1,000,000,000(mod)`로 나머지 연산.
4. 정답: `sum(dp[n][0..9]) % mod`.

```cpp
const int MOD = 1'000'000'000;
int dp[101][10] = {0};

for (int d = 1; d <= 9; d++) dp[1][d] = 1;

for (int i = 2; i <= n; i++) {
    dp[i][0] = dp[i-1][1] % MOD;
    dp[i][9] = dp[i-1][8] % MOD;
    for (int d = 1; d <= 8; d++)
        dp[i][d] = (dp[i-1][d-1] + dp[i-1][d+1]) % MOD;
}

long long ans = 0;
for (int d = 0; d <= 9; d++) ans = (ans + dp[n][d]) % MOD;
cout << ans << '\n';
```

## \:black\_nib: **Review**

* 경계 처리(0↔1, 9↔8)만 조심하면 전형적인 DP.
* 자리수마다 10개 상태만 유지하면 되어 메모리·시간 모두 가볍다.

## 📡 Link

[https://www.acmicpc.net/problem/10844](https://www.acmicpc.net/problem/10844)
