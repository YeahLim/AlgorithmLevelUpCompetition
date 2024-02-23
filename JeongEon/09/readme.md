# [백준] 부분합 (1806번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 투포인터
  두 개의 포인터를 이용, 현재 포인터의 합이 s보다 크거나 같으면 start ++
```
    	while (start <= end) {
    		if (sum >= S) {
    			minLen = min(minLen, end - start);
    			sum -= arr[start++];
    		}
    		else if (end == N) {
    			break;
    		}
    		else {
    			sum += arr[end++];
    		}
    	}
```


## :black_nib: **Review**

- 
