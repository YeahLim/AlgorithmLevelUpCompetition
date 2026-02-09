# [SWEA D3️⃣] 2805. 농작물 수확하기
 
## ⏰  **time**

31분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 마름모 꼴로 더한다.
```cpp
		for (int i = 0; i < floor(N / 2 + 0.5); i++) {
			for (int j = flag; j >= flag - i; j--) {
				result += arr[j][i];
				result += arr[j][N - i - 1];
			}

			for (int j = flag + 1; j <= flag + i; j++) {
				result += arr[j][i];
				result += arr[j][N - i - 1];
			}
		}

		for (int i = 0; i < N; i++) {
			result += arr[i][flag];
		}
```

## :black_nib: **Review**
- 
