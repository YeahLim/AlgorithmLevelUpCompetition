# [백준] 토마토 (7569번💛)

## ⏰  **time**

3시간

## :pushpin: **Algorithm**

너비우선탐색

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 너비 우선 탐색
  토마토가 익을 수 있는 방향벡터를 설정하고 확
```
    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            int a = get<0>(q.front());
            int b = get<1>(q.front());
            int c = get<2>(q.front());
            q.pop();
            for (int i = 0; i < 6; i++) {
                int na = a + dx[i];
                int nb = b + dy[i];
                int nc = c + dz[i];
                if (na >= 0 && nb >= 0 && nc >= 0 && H > na && N > nb && M > nc && !visited[na][nb][nc] && arr[na][nb][nc] == 0) {
                    q.push({ na,nb,nc });
                    visited[na][nb][nc] = visited[a][b][c] + 1;
                    tomato--;
                }
            }
        }
        days++;
    }
```


## :black_nib: **Review**

- 골드 너무 어렵다..
