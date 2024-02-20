# [백준] 숨바꼭질 (1697번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

너비우선탐색

## ⏲️**Time Complexity**

$O(N^K)$

## :round_pushpin: **Logic**

- 너비 우선 탐색
  *2를 한 값과 +1을 한 값과 -1을 한값을 모두 큐에 넣어 확
```
    	queue<pair<int, int>> q;
    	map[x] = true;
    	int cnt = 0;
    	q.push({ x, cnt });
    
    	while (!q.empty()) {
    		int nx = q.front().first;
    		cnt = q.front().second;
    		q.pop();
    		if (nx == K) {
    			break;
    		}
    
    		if (nx * 2 < MAX && nx * 2 >= 0) {
    			if (!map[nx * 2]) {
    				map[nx * 2] = true;
    				q.push({ nx * 2, cnt + 1 });
    			}
    		}
    
    		if (nx + 1 < MAX && nx + 1 >= 0) {
    			if (!map[nx + 1]) {
    				map[nx + 1] = true;
    				q.push({ nx + 1, cnt + 1 });
    			}
    		}
    
    		if (nx - 1 < MAX && nx - 1 >= 0) {
    			if (!map[nx - 1]) {
    				map[nx - 1] = true;
    				q.push({ nx - 1, cnt + 1 });
    			}
    		}
    	}	
    
    	return cnt;
```


## :black_nib: **Review**

- 
