# [백준 - 골드 5] 15686. 치킨 배달

## ⏰  **time**
1시간

## :pushpin: **Algorithm**
백트래킹, 브루트포스

## ⏲️ **Time Complexity**
- 치킨집 개수를 C, 선택할 개수를 M이라고 할 때  
  조합의 수: $O(\binom{C}{M})$
- 각 조합마다 도시 거리 계산: $O(H \times M)$ (H: 집 개수)
- 전체 시간 복잡도: $O(\binom{C}{M} \cdot H \cdot M)$  
  → C ≤ 13 이므로 완전탐색 가능

## :round_pushpin: **Logic**
1. 집과 치킨집의 좌표를 각각 저장
2. 치킨집 M개를 선택하는 **모든 조합을 백트래킹**으로 탐색
3. 선택된 치킨집 조합마다 모든 집과의 **최소 거리 합산**
4. 도시 치킨 거리의 최솟값을 계속 갱신하며 출력

```cpp
void selectChicken(int index, int count) {
    if (count == M) {
        calculateDistance();
        return;
    }
    for (int i = index; i < chicken.size(); i++) {
        if (!chicken[i].visited) {
            chicken[i].visited = true;
            selectChicken(i, count + 1);
            chicken[i].visited = false;
        }
    }
}

void calculateDistance() {
    int cityDistance = 0;
    for (auto h : house) {
        int minDist = MAX_INT;
        for (auto c : chicken) {
            if (c.visited) {
                int dist = abs(h.r - c.r) + abs(h.c - c.c);
                minDist = min(minDist, dist);
            }
        }
        cityDistance += minDist;
    }
    minCityDistance = min(minCityDistance, cityDistance);
}
```

## :black_nib: Review
- 

## 📡 Link

https://www.acmicpc.net/problem/15686
