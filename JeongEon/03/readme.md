# [백준] ATM (11399번)

## ⏰  **time**

22분

## :pushpin: **Algorithm**

그리디 알고리즘, 정렬, 누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 그리디 알고리즘
  자신이 걸리는 시간 + 뒷사람 n-1명에게 걸리는 시간이 소요
```
    	int time = 0;	// 인출 시간의 합 저장
    	for (int i = 0; i < N; i++) {	// 그리디
    		time += vec[i] * (N - i);	// 자신이 걸리는 시간 + 뒷사람 n-1명에게 걸리는 시간이 소요
    	}
```

- 누적합
```
    	int time = vec[0];	// 인출 시간의 합 저장
    	for (int i = 1; i < N; i++) {	// 누적합
    		vec[i] += vec[i - 1];
    		time += vec[i];
    	}
```

## :black_nib: **Review**

- 
