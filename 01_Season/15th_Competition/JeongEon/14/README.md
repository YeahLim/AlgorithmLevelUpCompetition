# [SWEA - D2️⃣] 2007. 패턴 마디의 길이

## ⏰  **time**

7분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 패턴의 최대 길이는 10이다. 고로, 입력값의 1~10 길이의 문자를 vector에 넣고 그 다음 입력값의 문자와 동일한지 확인한다.
```cpp
		for (int i = 1; i <= 10; i++) {
			vector<char> pattern;
			for (int j = 0; j < i; j++) {
				pattern.push_back(input[j]);
			}

			bool find_pattern = true;
			for (int j = 0; j < pattern.size(); j++) {
				if (pattern[j] != input[i + j]) {
					find_pattern = false;
					break;
				}
			}

			if (find_pattern) {
				result = pattern.size();
				break;
			}
		}
```  

## :black_nib: **Review**
- 월요일만해도 못 풀었는데 왜 지금은 쉽게 풀리지..?
