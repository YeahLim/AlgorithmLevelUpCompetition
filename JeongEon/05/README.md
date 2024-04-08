# [SWEA] 24시간 (12368번 D3️⃣)

## ⏰  **time**

6분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**
1. A+B가 24를 넘어가면 24를 빼고, 아니면 그대로 출
```cpp
		int time = A + B;

		if (time >= 24) {
			time = time - 24;
		}
```

## :black_nib: **Review**
- 
