# [백준] 알고리즘 수업 - 너비 우선 탐색 1 (24444번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

너비우선탐색

## ⏲️**Time Complexity**

$O(N^M)$

## :round_pushpin: **Logic**

- 너비 우선 탐색: 좌우에 있는 노드 먼저 탐색
```
  	while (!Q.empty()) {
  		int tmp = Q.front();
  		Q.pop();
  		for (int i = 0; i < graph[tmp].size(); i++) {
  			int temp = graph[tmp][i];
  			if (!visited[temp]) {
  				visited[temp] = true;
  				cnt++;
  				result[temp] = cnt;
  				Q.push(temp);
  			}
  		}
  	}
```

## :black_nib: **Review**

- 으 좌우 탐색 싫어.. 깊이 탐색만 나오면 좋겠다..
