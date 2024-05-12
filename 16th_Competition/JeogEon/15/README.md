# [SWEA D3️⃣] 8931. 제로
 
## ⏰  **time**

3분

## :pushpin: **Algorithm**

스텍

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. input == 0 ➡️ pop()
2. input != 0 ➡️ push(input)
```cpp
		stack<int> s;
		for (int i = 0; i < K; i++) {
			int input;
			cin >> input;
			if (input == 0) {
				s.pop();
			}
			else {
				s.push(input);
			}
		}
```
3. 결과는 s에 들어있는 모든 수를 더한다.
```cpp

		int size = s.size();
		int result = 0;
		for (int i = 0; i < size; i++) {
			result += s.top();
			s.pop();
		}
```

## :black_nib: **Review**
- 백준에도 있는 문제이다.
