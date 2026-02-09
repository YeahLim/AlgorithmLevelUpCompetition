# [SWEA] 백만 장자 프로젝트 (1859번 D2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

투포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 뒤에서부터 최대값과 뺀다.
```cpp
		for (int j = N - 1; j >= 0; j--) {
			if (vec[j] <= vec[max]) {
				sum += vec[max] - vec[j];
			}
			else {
				max = j;
			}
		}
```

## :black_nib: **Review**
- 처음에 이중 for문 썼더니 시간초과 났다.
