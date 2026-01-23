# [SWEA D3️⃣] 8673. 코딩 토너먼트1
 
## ⏰  **time**

23분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(Nlog(N) * K)$

## :round_pushpin: **Logic**
1. Q[i] 와 Q[i+1]를 비교해 더 큰 수를 queue에 넣고 두 수의 차를 result에 저장한다.
```cpp
		while (Q.size() > 1) {
			int size = Q.size();
			for (int i = 1; i <= size; i += 2) {
				int A = Q.front();
				Q.pop();
				int B = Q.front();
				Q.pop();

				if (A >= B) {
					Q.push(A);
				}
				else {
					Q.push(B);
				}

				result += abs(A - B);
			}
		}
```

2. 입력 받을 때 2^K 만큼 입력받아햐하므로 제곱 함수를 만들었다.
```cpp
int square(int K) {
	if (K <= 0) {
		return 1;
	}

	return 2 * square(K - 1);
}
```

## :black_nib: **Review**
- 
