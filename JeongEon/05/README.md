# [SWEA - D3️⃣] 19185. 육십갑자
 
## ⏰  **time**

17분

## :pushpin: **Algorithm**

구현, 수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 년도가 주어지면 그 년도의 육십갑자를 알아내는 것이다.
   Y[i]%N을 통해 S를 알아내고 Y[i]%M을 통해 T를 알아낸다.
   이때, Y[i]%N이나 Y[i]%M이 0이면 N-1, M-1글자를 출력한다.
```cpp
		for (int i = 0; i < Q; i++) {
			int first;
			if (Y[i] % N == 0) {
				first = N - 1;
			}
			else {
				first = Y[i] % N - 1;
			}
			int second;
			if (Y[i] % M == 0) {
				second = M - 1;
			}
			else {
				second = Y[i] % M - 1;
			}

			cout << S[first] << T[second] << " ";
		}
```

## :black_nib: **Review**
- 계산값이 0인 경우를 생각 못했다.
