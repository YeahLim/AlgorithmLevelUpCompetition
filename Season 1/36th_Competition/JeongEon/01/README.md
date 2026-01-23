# [백준 - 골드3] 20208. 진우의 민트초코우유
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
백트레킹

## ⏲️**Time Complexity**
$O(Nlog(N))$

## :round_pushpin: **Logic**
1. 방문하지 않았을 때, 집으로 돌아갈 수 있다면 민트초코우유의 최대개수를 갱신한다.
   ```cpp
void recur(int x, int y, int health, int cnt) {
    // 항상 현재 위치에서 집으로 갈 수 있는 지 파악하고
    // 민트초코우유의 최대 개수를 갱신한다.
    int go_home = abs(x - sx) + abs(y - sy);
    if (health >= go_home) {
        ans = max(ans, cnt);
    }
 
    for (int i = 0; i < point.size(); i++) {
        // i번째 지점까지 가는데 필요한 hp량
        int need_hp = abs(x - point[i].first) + abs(y - point[i].second);
        
        // 방문한 지점이면 continue
        if (visited[i]) continue;
        // 현재 위치에서 해당 위치까지 갈 수 없는 경우
        if (health < need_hp) continue;
        
        visited[i] = 1;
        recur(point[i].first, point[i].second, health - need_hp + h, cnt + 1);
        visited[i] = 0;
    }
}
   ```

## :black_nib: **Review**
- ... 어렵다...

## 📡 Link
https://www.acmicpc.net/problem/20208
