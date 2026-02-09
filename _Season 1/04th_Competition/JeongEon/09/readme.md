# [백준] 알고리즘 수업 - 깊이 우선 탐색 1 (24479번)

## ⏰  **time**

1시간

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

- 입력은 1부터 시작하는데, 배열은 0부터 시작해서 바꾸는 거 애먹었당
