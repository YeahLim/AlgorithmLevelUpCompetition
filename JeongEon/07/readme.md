# [백준] 오큰수 (17298번💛)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

스텍

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 오른쪽부터 시작해서 스텍에 집어넣고 차례대로 스텍의 top과 비교
```
    	for (int i = N-1; i >= 0; i--) {
    		while (!s.empty() && s.top() <= A[i]) {
    			s.pop();
    		}
    
    		if (s.empty()) {
    			result.push(-1);
    		}
    		else {
    			result.push(s.top());
    		}
    
    		s.push(A[i]);
    	}
```


## :black_nib: **Review**

- 
