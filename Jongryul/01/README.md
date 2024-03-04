# [백준 - 실버 1] 점프 (1890번)

https://www.acmicpc.net/problem/1890

## ⏰ **time**

30분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

1. 배열을 받고 dp배열을 만들고, bfs하듯이 검사를 해준다.
2. 같은 노드의 경로라도, 전의 노드의 경로가 다르면 다른 경우이다.
3. 그렇기 때문에 현재 dp에 전의 dp의 경우의 수를 더해준다.
4. dp가 0인 노드는 계산할 필요 없으니 무시한다.

## :black_nib: **Review**

- 그냥 단순히 +=1만 시켜줬어서 몇번 틀렸다.
