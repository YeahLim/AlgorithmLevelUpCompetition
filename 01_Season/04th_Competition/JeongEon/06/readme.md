# [백준] 최대 힙 (11279번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

우선순위 큐

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 우선순위 큐: 우선순위대로 정렬, FIFO
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

- 빠른 입출력 안 써서 3번이나 틀린게 너무 슬프다
