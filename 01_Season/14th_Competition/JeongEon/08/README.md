# [SWEA - D2️⃣] 1976. 시각 덧셈
 
## ⏰  **time**

7분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**
1. 시끼리 더하고 분끼리 더한다.
   if) 시 > 12 ➡️ 시 -= 12
   if) 분 >= 60 ➡️ 분 -= 60, 시 += 1
```cpp
		if (result_hour > 12) {
			result_hour -= 12;
		}

		if (result_min >= 60) {
			result_hour += 1;
			result_min -= 60;
		}
```

## :black_nib: **Review**
- 출력 방식 잘못되서 계속 틀림!
