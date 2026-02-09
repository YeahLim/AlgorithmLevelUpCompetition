# [백준 - 골5] 7576. 토마토 
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
bfs

## ⏲️**Time Complexity**
$O(N*M)$

## :round_pushpin: **Logic**
1. bfs
```python
    while q:
        x, y = q.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if (0 <= nx < n and 0 <= ny < m and graph[nx][ny] ==0):
                graph[nx][ny] = graph[x][y] + 1
                q.append((nx, ny))
```

## :black_nib: **Review**
- 중복이 되는 경우를 고려하여 visited 이중 리스트를 만들었는데 계속 더하면서 graph를 갱신하는 것이다 보니 visited가 필요없었다.
- visited를 사용하였다보니 graph[nx][ny]==0 을 고려하지 않았는데 이걸 안해서 틀렸다고 떴다. visited 사용한 상태에서 예제는 다 맞았다고 나와서 엄청 고생했다.
 
