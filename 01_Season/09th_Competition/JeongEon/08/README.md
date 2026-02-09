# [백준] 2xn 타일링 (11726번 🩶3️⃣)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식
D[n]= D[n-1] +D[n-2]
```
	for (int i = 2; i < n; i++) {
		dp.push_back((dp[i - 1] + dp[i - 2]) % 10007);
	}
```

## :black_nib: **Review**
- 처음엔 조합 생각했는데, 시간초과 날 거 같아서 새로운 방법을 찾았다.
