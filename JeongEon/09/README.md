# [SWEA - D3️⃣] 17319. 문자열문자열

## ⏰  **time**

25분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 재현이는 두번씩 쓰는 버릇이 있다.
   따라서 홀수인 문자열은 재현이가 작성한 것이 아니다.
   짝수인 문자열은 queue를 이용해 절반을 나눠 같은 문자인지 확인한다.
```cpp
		if (N % 2 == 0) {
			queue<char> Q;
			for (int i = 0; i < N / 2; i++) {
				Q.push(S[i]);
			}

			for (int i = N / 2; i < N; i++) {
				if (Q.front() != S[i]) {
					possible = false;
					break;
				}
				Q.pop();
			}
		} 
		else {
			possible = false;
		}
```

## :black_nib: **Review**
- 출력을 틀려서..
