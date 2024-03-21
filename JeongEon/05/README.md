# [백준] 동전 1 (2293번 💛5️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(K^N)$

## :round_pushpin: **Logic**
1. 점화식
   - if) 해당 동전으로 0 ~ K 가치를 만들 수 있는 경우의 수
     ➡️ dp[j] += dp[j - coin]
   - if) 가치가 0인 경우
     ➡️ dp[0] = 0 (아무 동전도 고르지 않음)
2. 초기값 = 0
3. 증가값 = 1
```
		for (int j = coin; j <= k; j++) {
			dp[j] += dp[j - coin];
		}
```

## :black_nib: **Review**
- 이건 여태까지 했던 dp 테이블이랑 달랐다.. 접근 어렵다
