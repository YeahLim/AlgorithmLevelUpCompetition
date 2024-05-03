# [SWEA] 파리 퇴치 (2001번 D2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. M*M크기만큼 확인
```cpp
		for (int j = 0; j < N - M + 1; j++) {
			for (int k = 0; k < N - M + 1; k++) {
				int sum = 0;
				for (int l = j; l < j + M; l++) {
					for (int m = k; m < k + M; m++) {
						sum += vec[l][m];
					}
				}
				if (maxi < sum)
					maxi = sum;
			}
		}
```

## :black_nib: **Review**
- 
