# [백준] DFS와 BFS (1260번)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

깊이우선탐색, 너비 우선 탐색

## ⏲️**Time Complexity**

$O(N^M)$

## :round_pushpin: **Logic**

- 깊이 우선 탐색
```
  	if (visited_dfs[x] == true) {
  		return;
  	}
  
  	visited_dfs[x] = true;
  	cnt_dfs++;
  	result[cnt_dfs] = x;
  
  	for (int i = 0; i < graph[x].size(); i++) {
  		dfs(graph[x][i]);
  	}
```

- 너비 우선 탐색
```
  	queue<int> Q;
  	Q.push(x);
  	visited_bfs[x] = true;
  	cnt_bfs++;
  	result[cnt_bfs] = x;
  
  	while (!Q.empty()) {
  		int tmp = Q.front();
  		Q.pop();
  		for (int i = 0; i < graph[tmp].size(); i++) {
  			int temp = graph[tmp][i];
  			if (!visited_bfs[temp]) {
  				visited_bfs[temp] = true;
  				cnt_bfs++;
  				result[cnt_bfs] = temp;
  				Q.push(temp);
  			}
  		}
  	}
```

## :black_nib: **Review**

- 
