# [백준] 연산자 끼워넣기 (14888번)

## ⏰  **time**

1시간 30분

## :pushpin: **Algorithm**

백트레킹

## ⏲️**Time Complexity**

$O(4^N)$

## :round_pushpin: **Logic**

- void bfs(int result, int idx)
``` 
  	if (idx == N) {
  		if (result > maximum) {
  			maximum = result;
  		}
  		if (result < minimum) {
  			minimum = result;
  		}
  		return;
  	}
  
  	for (int i = 0; i < 4; i++) {
  		if (oper[i] > 0) {
  			oper[i]--;
  			if (i == 0) {
  				bfs(result + arr[idx], idx + 1);
  			}
  			if (i == 1) {
  				bfs(result - arr[idx], idx + 1);
  			}
  			if (i == 2) {
  				bfs(result * arr[idx], idx + 1);
  			}
  			if (i == 3) {
  				bfs(result / arr[idx], idx + 1);
  			}
  			oper[i]++;
  		}
  	}
```

## :black_nib: **Review**

- 백트레킹.. 어렵다..
