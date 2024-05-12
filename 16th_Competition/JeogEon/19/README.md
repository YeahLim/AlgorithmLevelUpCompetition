# [SWEA D3️⃣] 7510. 상원이의 연속 합
 
## ⏰  **time**

8분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. i부터 N까지 연속된 수를 빼가며 0이 되면 cnt++
```cpp
		for (int i = 1; i <= N; i++) {
			if (i > N) {
				break;
			}
			int tmp = N;
			for (int j = i; j <= N; j++) {
				if (tmp <= 0) {
					if (tmp == 0) {
						cnt++;
					}
					break;
				}
				tmp -= j;
			}
		}
```

## :black_nib: **Review**
- 
