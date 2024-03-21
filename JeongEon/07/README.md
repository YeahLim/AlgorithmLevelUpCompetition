# [백준] 부녀회장이 될테야 (2775번 🤎1️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O((N*K)^T)$

## :round_pushpin: **Logic**
1. 점화식
   - if) 0층이라면
     ➡️ apt[j][p] = p (p호에는 p명이 살고 있음)
   - if) 그외 층이라면
     ➡️ apt[j][p] = apt[j][p - 1] + apt[j - 1][p] (j층 p-1호에 사는 사람 수 + j-1층 p호에 사는 사람 수)
```
		for (int j = 0; j <= k; j++) {
			for (int p = 1; p <= n; p++) {
				if (j == 0) {
					apt[j][p] = p;
					continue;
				}
				apt[j][p] = apt[j][p - 1] + apt[j - 1][p];
			}
		}
```

## :black_nib: **Review**
- 이건 누적합 사용하는 거라서 규칙 찾기 편했다.
