# [백준] 11660번. 구간 합 구하기 6

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(n^2)$

## :round_pushpin: **Logic**

1. DP
   
   ```
   sum_list = [[0]*(n+1) for _ in range(n+1)]
   ```

## :black_nib: **Review**

- sum_list를 만들어서 일일히 계산하지 않고 최종 값만 불러와서 시간효율을 높였다
