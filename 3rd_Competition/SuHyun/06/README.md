# [백준 - 실버2] 이동하기(11048)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 점화식

```java
    현재 위치로 갈때 얻는 사탕의 최대값 = max(왼쪽의 사탕의 최대값, 위쪽의 사탕의 최대값,왼쪽위대각 사탕의 최대값) + 현재 위치의 사탕
```


## :black_nib: **Review**
- 움직이는 방향이 오른쪽,아래,오른대각이기 때문에 행은 아래로, 열은 오른쪽으로 순회하면서 최대값을 구하면 된다.