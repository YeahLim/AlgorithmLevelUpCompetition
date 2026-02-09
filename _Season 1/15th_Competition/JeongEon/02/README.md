# [SWEA - D3️⃣] 20551. 증가하는 사탕 수열
 
## ⏰  **time**

15분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. B >= C ➡️ B주머니에서 B - C + 1만큼 사탕을 먹는다.
2. A >= C ➡️ A주머니에서 A - B + 1 만큼 사탕을 먹는다.
3. A <= 0, B <= 1, C <= 2 ➡️ 순증가하긴 하나 모든 주머니에 1개 이상의 사탕이 있어야한다는 조건 성립하지 않음
                          ➡️ result = -1
```cpp
		if (B >= C) {
			result += B - C + 1;
			B -= B - C + 1;
		}

		if (A >= B) {
			result += A - B + 1;
			A -= A - B + 1;
		}

		if (A <= 0 || B <= 1 || C <= 2) {
			result = -1;
		}
```

## :black_nib: **Review**
- 반복문 통해서 하나씩 빼려고 했는데 시간초과 났다.
