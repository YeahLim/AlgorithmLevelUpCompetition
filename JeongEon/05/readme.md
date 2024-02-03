# [백준] N과 M (3) (15651번)

## ⏰  **time**

5분

## :pushpin: **Algorithm**

백트레킹

## ⏲️**Time Complexity**

$O(N^M)$

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
  			arr[cnt] = i + 1;
        dfs(cnt + 1);
  		}
  	}
```

## :black_nib: **Review**

- 
