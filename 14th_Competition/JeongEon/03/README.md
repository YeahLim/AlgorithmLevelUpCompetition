# [SWEA - D3️⃣] [S/W 문제해결 기본] 7일차 - 암호생성기 (1225)
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 맨 앞의 수를 1~5씩 사이클을 돌며 뺸다. 뺀 수가 0이랑 같거나 작으면 종료.
```cpp
deque<int> calculate(deque<int> deq) {
	bool zero = false;

	while (!zero) {
		for (int i = 1; i <= 5; i++) {
			if (deq.front() - i <= 0) {
				deq.pop_front();
				deq.push_back(0);
				zero = true;
				break;
			}
			else {
				deq.push_back(deq.front() - i);
				deq.pop_front();
			}
		}
	}

	return deq;
}
```

## :black_nib: **Review**
- 
