# [백준] 절댓값 힙 (11286번)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

우선순위 큐

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 우선순위 큐: priority_queue<int, vector<int>, comp> Q
  꼭 구조체여야함! 무직언!
```
    struct comp {
    	bool operator() (long long int a, long long int b) {
    		if (abs(a) == abs(b)) {
    			return a > b;
    		}
    		return abs(a) > abs(b);
    	}
    };
```

## :black_nib: **Review**

- 
