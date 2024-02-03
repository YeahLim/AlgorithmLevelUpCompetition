# [백준] N과 M (1) (15649번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

백트레킹

## ⏲️**Time Complexity**

$O(N!)$

## :round_pushpin: **Logic**

- void dfs(int cnt)
``` 
  	if (cnt == M) {
  		for (int i = 0; i < M; i++) {
  			cout << arr[i] << " ";
  		}
  		cout << '\n';
  		return;
  	}
  
  	for (int i = 0; i < N; i++) {
  		if (!visited[i]) {
  			visited[i] = true;
  			arr[cnt] = i + 1;
  			dfs(cnt + 1);
  			visited[i] = false;
  		}
  	}
```

## :black_nib: **Review**

- 백트레킹 어렵다..! bfs 구현하는 게 새로웠다.
