# [백준] 최소 힙 (1927번)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

우선순위 큐

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 우선순위 큐: priority_queue<int, vector<int>, greater<int>> Q
  greater<자료형>: 오름차순
  less<자료형>: 내림차
```
    	for (int i = 0; i < N; i++) {
    		cin >> input;
    		if (input == 0) {
    			if (Q.empty()) {
    				cout << 0 << '\n';
    			}
    			else {
    				cout << Q.top() << '\n';
    				Q.pop();
    			}
    		}
    		else {
    			Q.push(input);
    		}
    	}
```

## :black_nib: **Review**

- 
