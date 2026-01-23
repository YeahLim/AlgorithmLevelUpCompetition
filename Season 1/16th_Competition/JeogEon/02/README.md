# [SWEA D3️⃣] 5431. 민석이의 과제 체크하기
 
## ⏰  **time**

5분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 입력받은 수를 배열의 위치로 사용해 체크한다. 그 후, false인 위치만 출
```cpp
		for (int i = 1; i <= N; i++) {
			if (!arr[i]) {
				cout << i << " ";
			}
		}
```

## :black_nib: **Review**
- 
