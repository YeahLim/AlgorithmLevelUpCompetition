# [백준] 정수 삼각형 (1932번 🩶1️⃣)

## ⏰  **time**

47분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N!)$

## :round_pushpin: **Logic**
1. 윗 줄 중 바로 위쪽, 왼쪽 대각선 중 큰 것을 고른다.
```cpp
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			sum[i][j] = max(sum[i-1][j-1], sum[i-1][j]) + tri[i][j];
		}
	}
```

## :black_nib: **Review**
- 맨처음엔 입력하는 것도 애먹었다.
