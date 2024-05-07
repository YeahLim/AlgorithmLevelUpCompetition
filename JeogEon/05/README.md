# [SWEA D3️⃣] 1289. 원재의 메모리 복구하기
 
## ⏰  **time**

18분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 다음 숫자가 다음 숫자와 다르면 cnt++
```cpp
		for (int i = 0; i < input.length(); i++) {
			if (change) {
				if (input[i] == '1') {
					if (i + 1< input.length() && input[i + 1] != '1') {
						change = false;
						cnt++;
					}
				}
			}
			
			if (!change) {
				if (input[i] == '0') {
					if (i + 1 < input.length() && input[i + 1] != '0') {
						change = true;
						cnt++;
					}
				}
			}
		}
```

## :black_nib: **Review**
- 
