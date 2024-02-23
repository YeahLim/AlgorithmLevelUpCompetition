# [백준] 미로 탐색 (2178번🩶)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

너비우선탐색

## ⏲️**Time Complexity**

$O(N^M)$

## :round_pushpin: **Logic**

- 너비 우선 탐색
  방향벡터를 통해 상하좌우를 확인
```
    	queue<pair<int, int>> Q;
    	Q.push({ y, x });
    	visited[y][x] = 1;
    
    	while (!Q.empty()) {
    		int ny = Q.front().first;
    		int nx = Q.front().second;
    		Q.pop();
    		
    		for (int i = 0; i < 4; i++) {
    			int nny = dy[i] + ny;
    			int nnx = dx[i] + nx;
    
    			if (nny < 0 || nnx < 0 || nny >= N || nnx >= M) {	// 미로 크기를 벗어다면
    				continue;
    			}
    
    			if (maze[nny][nnx] == 0) {	// 이동할 수 없는 곳이라면
    				continue;
    			}
    
    			if (maze[nny][nnx] == 1 && visited[nny][nnx] == 0) {
    				Q.push({ nny, nnx });
    				visited[nny][nnx] = visited[ny][nx] + 1;
    			}
    		}
	    }
```


## :black_nib: **Review**

- 
