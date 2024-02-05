# [백준] 수열 (2559번)

## ⏰  **time**

1시간 30분

## :pushpin: **Algorithm**

누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 누접합이라는 성질을 이용해 입력받는 수를 더한 값으로 배열에 저장. 
```
    for (int i = 1; i <= N; i++) {
    		cin >> arr[i];
    		sum[i] += sum[i - 1] + arr[i];
    		if (i > K) {
    			sum[i] -= arr[i - K];
    		}
    
    		if (i >= K && sum[i] > maximum) {
    			maximum = sum[i];
    		}
    }
```

## :black_nib: **Review**

- 
