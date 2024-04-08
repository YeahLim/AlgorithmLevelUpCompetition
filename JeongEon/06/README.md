# [SWEA] 준환이의 운동관리 (3431번 D3️⃣)

## ⏰  **time**

5분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**
1. X < L ➡️ I = L - X
2. L <= X <= U ➡️ I = 0
3. X > U ➡️ I = -1
```cpp
		if (X < L) {
			I = L - X;
		}
		else if (X >= L && X <= U) {
			I = 0;
		}
		else if (X > U) {
			I = -1;
		}
```

## :black_nib: **Review**
- 
