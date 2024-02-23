# [백준] 나이트의 이동 (7562번🩶)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

너비우선탐색

## ⏲️**Time Complexity**

$O((8^I)^T)$

## :round_pushpin: **Logic**

- 너비 우선 탐색
  나이트가 이동할 수 있는 방향벡터를 설정하고 확인
```
    	queue<pair<int, int>> q;
    	q.push({ y, x });
    	visited[y][x] = true;
    	int cnt;
    
    	while (!q.empty()) {
    		int ny = q.front().first;
    		int nx = q.front().second;
    		q.pop();
    
    		if (ny == target_y && nx == target_x) {
    			cnt = arr[ny][nx];
    			break;
    		}
    
    		for (int i = 0; i < 8; i++) {
    			int nny = dy[i] + ny;
    			int nnx = dx[i] + nx;
    
    			if (nny < 0 || nnx < 0 || nny >= I || nnx >= I) {
    				continue;
    			}
    
    			if (visited[nny][nnx] == false) {
    				q.push({ nny, nnx });
    				visited[nny][nnx] = true;
    				arr[nny][nnx] = arr[ny][nx] + 1;
    			}
    		}
    	}
    
    	return cnt;
```


## :black_nib: **Review**

- 
