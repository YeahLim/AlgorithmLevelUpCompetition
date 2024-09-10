# [백준 - 골드 5] 2294. 동전 2

## ⏰  **time**
1시간

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
1. DP 배열을 만들어 K가지 될 수있는 최소 동전개수를 DP에 저장한다.
```cpp
	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}
```

## :black_nib: **Review**
- DP 어렵다... 다른 사람꺼 결국 봐버렸다.

## 📡 Link
https://www.acmicpc.net/problem/2294
