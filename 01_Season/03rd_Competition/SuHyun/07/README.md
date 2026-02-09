# [백준 - 골드2] 벽 부수고 이동하기 2(14442)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N^2*K)$

## :round_pushpin: **Logic**
1. 방문처리

```
    boolean[문을 부순 횟수][행][열]방문배열
```


## :black_nib: **Review**
- 방문배열은 꼭 좌표 뿐만 아니라 문을 부순다던가 아이템을 사용한다던가 등 이벤트를 포함하는 경우도 있다. 