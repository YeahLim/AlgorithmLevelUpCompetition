# [백준] 동전 0 (11047번)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

그리디 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 동전의 합 K에서 입력된 동전의 종류를 빼가며 필요한 동전의 개수를 구함.
```
    	int coin_cnt = 0;	// 필요한 동전의 개수 -> 결과값
    	for (int i = N - 1; i >= 0; i--) {
    		if (arr[i] <= K) {
    			coin_cnt += K / arr[i];
    			K -= (K / arr[i]) * arr[i];
    		}
    	}
```

## :black_nib: **Review**

- 그리디가 이게 맞나..?
