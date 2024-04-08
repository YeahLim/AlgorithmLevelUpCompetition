# [백준] RGB거리 (1149번 🩶1️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 빨간색, 초록색, 파란색의 가격 중 가장 작고, 이전 집에 칠하지 않은 색의 가격을 합한다.
```cpp
    for (int i = 1; i <= N; ++i) {
        cin >> cost[0] >> cost[1] >> cost[2];
        
        house[i][0] = min(house[i - 1][1], house[i - 1][2]) + cost[0];
        house[i][1] = min(house[i - 1][0], house[i - 1][2]) + cost[1];
        house[i][2] = min(house[i - 1][1], house[i - 1][0]) + cost[2];
    }
```

## :black_nib: **Review**
- BFS로 하다가 틀렸다.
- 풀이보니까 너무 쉬운 풀이였다. 이마탁...🤦‍♂️
