# [백준] 구간 합 구하기 5 (11660번)

## ⏰  **time**

35분

## :pushpin: **Algorithm**

누적합

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 누적합 성질과 표 성질을 이용함.
```
  	for (int i = 1; i <= N; i++) {	// 표 입력(1부터 N까지)
  		for (int j = 1; j <= N; j++) {
  			int input;
  			cin >> input;
  			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + input;
  		}
  	}
```

## :black_nib: **Review**

- 으 표 그만... 누접합도 그만..
