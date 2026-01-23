# [SWEA D3️⃣] 3142. 영준이와 신비한 뿔의 숲
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 2*twin + uni == M인지 확인한
```cpp
		for (int i = M; i >= 1; i--) {
			int tmp = N;
			if (2 * i <= tmp) {
				twin = i;
				tmp -= 2 * i;
				uni = tmp;
				if (twin + uni == M) {
					break;
				}
				twin = 0;
				uni = 0;
			}
		}
```

## :black_nib: **Review**
- 
