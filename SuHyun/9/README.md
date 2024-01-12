# [프로그래머스] 카운트 다운

30분

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(N*logN)$

## :round_pushpin: **Logic**
1. 점화식
```
DP[점수 최소 시간] = min(DP[현재 점수를 맞춘 시간]+1,DP[점수 최소 시간])
```
이때 시간이 같으면 최대 싱글&불 횟수를 따져야 하므로 배열을 추가로 만든다

## :black_nib: **Review**
- 가장 우선순위가 놓은 것을 먼저 하고 낮은것을 나중에 해야 최대한 많은 값을 큐에 안넣을수 있다.
