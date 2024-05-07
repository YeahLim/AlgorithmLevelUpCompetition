# [SWEA D2️⃣] 1961. 숫자 배열 회전
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 배열을 90도, 180도, 270도 돌린다.
```cpp
		for (int i = N - 1; i >= 0; i--) {
			for (int j = 0; j < N; j++) {
				result[j][0] += to_string(arr[i][j]);	// 90도
				result[j][1] += to_string(arr[N - j - 1][i]);	// 180도
				result[j][2] += to_string(arr[N - i - 1][N - j - 1]);	// 270도
			}
		}
```

## :black_nib: **Review**
- 마지막에 출력을 조심하자..!
