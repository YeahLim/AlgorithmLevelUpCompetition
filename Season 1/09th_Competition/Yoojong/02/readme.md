# [백준 - 실버 3] 계단 오르기 (2579)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

다이나믹 프로그래밍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
max(세 전단계best +전단계 +현제, 전단계best + 현제)
```
for i in range(4, n + 1):
    dp[i] = max(dp[i - 3] + stairs[i - 1] + stairs[i], dp[i - 2] + stairs[i])

```

## :black_nib: **Review**
- 연속적으로 세계단을 한칸씩 오르면 안되므로 알고리즘를 이렇게 생각했다.
- 전전 단계의 best 값이랑 전단계의 best값을 비교하면 되는 줄 알았는데 틀림
- 전전 단계의 best값이랑 현제 계단의 값을 더하는 부분이 틀린 것이었다.
- 세 전단계의 best와 전단계 + 현제로 하니 풀림
