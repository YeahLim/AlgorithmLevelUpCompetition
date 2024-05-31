# [백준 - 골드 4] 합이 0 (3151)
 
## ⏰  **time**

시간초과

## :pushpin: **Algorithm**

투포인터

## ⏲️**Time Complexity**

$O(N*logN)$

## :round_pushpin: **Logic**

1. 문제풀이

NC3 으로 문제를 풀기엔 시간복잡도가 부족하기 때문에 N*(N-1)C2를 이용해 문제를 해결한다

나머지 2개의 합은 투포인터를 이용해 구하는데 각 포인터의 다음 값과 현재값이 같다면 또 탐색할 필요가 없으므로 중복 포인터 값은 스킵하고 더해주면 더 효율적으로 구할 수 있다

## :black_nib: **Review**
- for(int = i){for(int j = i+1){}}의 이중 for문 시간복잡도는 nlogn이다.