# [SWEA] 간단한 소인수분해 (1945번 D2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 수학 : 2, 3, 5, 7, 11로 몇 번 나누어지는지 확인
```cpp
		while (N % 11 == 0) {
			e++;
			N = N / 11;
		}
```

## :black_nib: **Review**
- 
