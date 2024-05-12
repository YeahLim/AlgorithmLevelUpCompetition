# [SWEA D3️⃣] 7728. 다양성 측정
 
## ⏰  **time**

5분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 입력된 숫자 check 위치가 false라면 result++
```cpp
		for (int i = 0; i < input.length(); i++) {
			if (!check[input[i] - '0']) {
				check[input[i] - '0'] = true;
				result++;
			}
		}
```

## :black_nib: **Review**
- 
