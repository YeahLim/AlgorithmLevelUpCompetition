# [백준] 스타트와 링크 (14889번)

## ⏰  **time**

3시간

## :pushpin: **Algorithm**

백트레킹

## ⏲️**Time Complexity**

$O(N^4)$

## :round_pushpin: **Logic**

- void dfs(int x, int pos)
``` 
  	if (x == N / 2)	{
  		int start, link;
  		start = 0;
  		link = 0;
  
  		for (int i = 1; i <= N; i++) {
  			for (int j = 1; j <= N; j++) {
  				if (check[i] == true && check[j] == true) {
  					start += stats[i][j];
  				}
  				if (check[i] == false && check[j] == false) {
  					link += stats[i][j];
  				}
  			}
  		}
  
  		int temp = abs(start - link);
  		if (ans > temp) {
  			ans = temp;
  		}
  
  		return;
  	}
  
  	for (int i = pos; i < N; i++) {
  		check[i] = true;
  		dfs(x + 1, i + 1);
  		check[i] = false;
  	}
```

## :black_nib: **Review**

- 문제가 너무 어렵다.. 이런 문제가 다 어려운건가..
