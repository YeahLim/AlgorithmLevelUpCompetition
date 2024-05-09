# [SWEA D3️⃣] 10200. 구독자 전쟁
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 두 구독자 수의 합이 N보다 크면 초과한 인원 수가 최소 중복 구독자이다.
2. 최대 중복 구독자 수는 두 구독자수중 더 적은 쪽이 된다.
```cpp
		if (A + B > N) {
			mini = (A + B) - N;
		}
		else {
			mini = 0;
		}

		if (A >= B) {
			maxi = B;
		}
		else {
			maxi = A;
		}
```

## :black_nib: **Review**
- 
