# [SWEA] 수도 요금 경쟁 (1284번 D2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. A사 요금 = P * W
2. B사 요금 = Q + (S*(W - R))
```cpp
		int A = P * W;
		int B = Q;

		if (W > R) {
			W = W - R;
			B += S * W;
		}
```

## :black_nib: **Review**
- 
