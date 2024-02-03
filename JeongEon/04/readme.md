# [백준] N과 M (2) (15650번)

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
  			if (cnt == 0 || arr[cnt - 1] <= arr[cnt]) {
  				dfs(cnt + 1);
  			}
  			visited[i] = false;
  		}
  	}
```

## :black_nib: **Review**

- 백트레킹 어렵다..!
