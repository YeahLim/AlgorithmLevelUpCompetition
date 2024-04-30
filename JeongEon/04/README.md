# [SWEA - D3️⃣] 20019. 회문의 회문
 
## ⏰  **time**

37

## :pushpin: **Algorithm**

구현, 펠린드롬(회문)

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 입력 문자의 앞부분 (N-1)/2 글자와 뒷부분 (N-1)/2 글자, 전체가 회문인지 확인한다.
2. 앞부분 : 앞부분의 앞 절반과 뒷 절반을 비교한다. 이때, (N-1)/2가 홀수일 때와 짝수일때는 범위가 +1만큼 달라진다.
3. 뒷부분 : 뒷부분의 앞 절반과 뒷 절반을 비교한다. 이때, (N-1)/2가 홀수일 때와 짝수일때는 범위가 -1만큼 달라진다.
4. 전체 : 전체의 앞 절반과 뒷절반을 비교한다. 일반적인 펠린드롬 문제와 똑같다.
```cpp
bool front(string S) {
	int N = S.length();
	
	int tmp;
	if (((N - 1) / 2) % 2 == 0) {
		tmp = 0;
	}
	else {
		tmp = 1;
	}

	stack<char> front;
	for (int i = 0; i < floor((N - 1) / 4); i++) {
		front.push(S[i]);
	}

	for (int i = floor((N - 1) / 4) + tmp; i < (N - 1) / 2; i++) {
		if (front.top() != S[i]) {
			return false;
		}
		front.pop();
	}

	return true;
}
```

## :black_nib: **Review**
- 처음에 다 회문이 아니라고 해서 틀렸다.
- 알고보니 (N-1)/2 앞부분, 뒷부분이 짝수일때 홀수일때 범위가 달라서였다.
