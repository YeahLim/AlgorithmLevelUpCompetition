# [백준 - 골드 5] 개업 (13910)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 문제풀이

해빈이는 최대 웍을 2개씩 쓸 수 있기 때문에 웍 1개와 2개의 조합을 이용해서 웍의 크기를 만들어야 한다.

이때 중복을 피하기 위해 Set을 이용한다.

이후 최소값을 이용한 점화식을 세우면 다음과 같다.

```
    dp[현재][그릇 수] = Math.min(dp[이전][그릇 수 - 현재 웍의 크기],dp[현재][그릇 수 - 현재 웍의 크기],dp[이전][그릇 수]) 
```

## :black_nib: **Review**
- 현재의 웍을 그대로 또 쓸 수 있다면 이전과 현재 2개를 동시에 봐야한다.