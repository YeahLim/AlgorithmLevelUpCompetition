# [백준] 유기농 배추 (1012번)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

깊이우선탐색

## ⏲️**Time Complexity**

$O((N^M)^T)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색
  방향벡터를 통해 상하좌우를 확인해 배추가 있는 지 확
```
    	visited[x][y] = true;
    
    	// 네 방향 확인
    	for (int i = 0; i < 4; i++) {
    		int nx = dx[i] + x;
    		int ny = dy[i] + y;
    
    		if (ny < 0 || nx < 0 || nx >= M || ny >= N) {
    			continue;
    		}
    
    		if (arr[nx][ny] == 1 && visited[nx][ny] == false) {
    			dfs(arr, visited, nx, ny);
    		}
    	}
```


## :black_nib: **Review**

- 반복문 안돌렸다가 오류났다
