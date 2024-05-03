# [SWEA - D3️⃣] 10570. 제곱 팰린드롬 수

## ⏰  **time**

27분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O((B-A)*N)$

## :round_pushpin: **Logic**
1. 먼저 제곱근이 나오는 수를 찾아야한다.
```cpp
		for (int i = A; i <= B; i++) {
			if (floor(sqrt(i)) == sqrt(i)) {
				string input1 = to_string(i);
				string input2 = to_string((int)sqrt(i));
				if (num(input1) && sqrt_num(input2)) {
					result++;
				}
			}
		}
```  
2. 해당 수가 회문이면서, 그 수의 제곱근 마저 회문이여야한다.
```cpp
bool sqrt_num(string x) {
	int tmp = 0;
	if (x.size() % 2 != 0) {
		tmp = 1;
	}
	stack<char> stack;
	for (int i = 0; i < (x.size() - tmp) / 2; i++) {
		stack.push(x[i]);
	}

	for (int i = (x.size() - tmp) / 2 + tmp; i < x.size(); i++) {
		if (stack.top() != x[i]) {
			return false;
		}
		stack.pop();
	}

	return true;
}
```

## :black_nib: **Review**
- 회문 알고리즘은 쉬운데, 제곱근 회문 체크를 안해서 계속 틀렸다.
