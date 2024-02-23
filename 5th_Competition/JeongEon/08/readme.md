# [백준] 두 용액 (2470번💛)

## ⏰  **time**

25분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 투포인터
  오름차순으로 정렬한 후, 두 개의 포인터를 이용
  합이 양수면 end--
  합이 음수면 start++
```
    	while (start < end) {
    		if (abs(arr[start] + arr[end]) < sum) {
    			sum = abs(arr[start] + arr[end]);
    			result[0] = arr[start];
    			result[1] = arr[end];
    
    			if (sum == 0) {
    				break;
    			}
    		}
    
    		if (arr[start] + arr[end] < 0) {
    			start++;
    		}
    		else {
    			end--;
    		}
    	}
```


## :black_nib: **Review**

- 
