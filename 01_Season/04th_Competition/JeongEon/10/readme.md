# [백준] 알고리즘 수업 - 깊이 우선 탐색 2 (24480번)

## ⏰  **time**

2분

## :pushpin: **Algorithm**

깊이우선탐색

## ⏲️**Time Complexity**

$O(N^M)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색
```
  	if (visited[x] == true) {	// 이미 방문했으면 돌아감
  		return;
  	}
  
  	// 방문하지 않았다면
  	visited[x] = true;
  	cnt++;
  	result[x] = cnt;
  
  	for (int i = 0; i < graph[x].size(); i++) {
  		dfs(graph[x][i]);
  	}
```

## :black_nib: **Review**

- 엇.. 이전 코드에서 sort할때 내림차순으로 하면 되는 거였당😆
