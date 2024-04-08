# [SWEA] 지그재그 숫자 (1986번 D2️⃣)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 수학 : 홀수는 더하고 짝수는 뺸다.
```cpp
		for (int j = 1; j <= N; j++) {
			if (j % 2 == 0) {
				sum -= j;
			}
			else {
				sum += j;
			}
		}
```

## :black_nib: **Review**
- 
