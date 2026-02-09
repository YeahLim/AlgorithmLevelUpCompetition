# [SWEA - D2️⃣] 초심자의 회문 검사 (1989)
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

Deque

## ⏲️**Time Complexity**

$O(N^T)$

## :round_pushpin: **Logic**
1. 회문: level 같이 앞으로 읽어도 거꾸로 읽어도 같은 단어를 이른다.
2. deque를 이용해 앞뒤 단어가 같으면 제거하여 회문 확인
```cpp
		while (!deq.empty()) {
			if (deq.size() == 1) {
				result = 1;
				break;
			}

			if (deq.front() == deq.back()) {
				deq.pop_front();
				deq.pop_back();
			}
			else {
				result = 0;
				break;
			}
		}
```

## :black_nib: **Review**
- 
