# [백준 - 골드 3] 색상환 (2482)
 
## ⏰  **time**

1시간 20분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 문제풀이

DP 식
```
    1~현재 색을 이용해서 N의 길이가 가능한 개수 = 현재 색을 사용하지않고 1~이전색을 이용해서 N의 길이가 가능한 개수 + 현재 색을 사용하고 1~이전색을 이용해서 N-1의 길이가 가능한 개수
```

## :black_nib: **Review**
- 모르겠으면 경우의 수를 직접 모두 구해서 규칙을 찾자