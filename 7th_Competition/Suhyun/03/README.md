# [백준 - 골드 3] 수열과 쿼리 15 (14427)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

우선순위 큐

## ⏲️**Time Complexity**

$O(N*logN)$

## :round_pushpin: **Logic**
1. 풀이과정

N은 최대 100,000이기 때문에 매번 정렬하고 가장 작은 값을 찾으면 100,000* 100,000*log100,000이 되기 때문에 시간 초과가 난다.

그러므로 새로 바뀌는 값을 저장하고 우선순위 큐에 추가한 뒤 이후 큐 안의 가장 작은 값이 바뀐 값과 다르다면 무시하고 다른 작은 값을 찾아내는 식으로 구현하면 최대 200,000*log100,000 시간복잡도로 해결할 수 있다.


## :black_nib: **Review**
- 정렬은 우선순위 큐가 제일 쓰기 편하다.