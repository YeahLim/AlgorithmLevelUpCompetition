# [백준] 단지번호붙이기 (2667번)

## ⏰  **time**

2시간 30분

## :pushpin: **Algorithm**

깊이우선탐색

## ⏲️**Time Complexity**

$O(N^N)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색
  방향벡터를 통해 상하좌우를 확인해 같은 단지 내에 몇 세대가 사는 지 확인
```
    	visited[y][x] = true;
    	house++;
    
    	for (int i = 0; i < 4; i++) {
    		int nx = x + dx[i];
    		int ny = y + dy[i];
    
    		if (nx < 0 || ny < 0 || nx >= N || ny >= N) {
    			continue;
    		}
    
    		if (map[ny][nx] == 1 && visited[ny][nx] == false) {
    			dfs(ny, nx);
    		}
    	}
```


## :black_nib: **Review**

- 윽.. 입력 받을때 그냥 받았다가 엄첨 오래 걸림! string으로 받아서 하나씩 떼서 저장함.
