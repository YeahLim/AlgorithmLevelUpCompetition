# [백준] 바이러스 (2606번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

깊이우선탐색

## ⏲️**Time Complexity**

$O(N^K)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색
```
  	if (visited[x] == true) {
  		return;
  	}
  
  	visited[x] = true;
  	cnt++;
  
  	for (int i = 0; i < graph[x].size(); i++) {
  		dfs(graph[x][i]);
  	}
```

## :black_nib: **Review**

- 
