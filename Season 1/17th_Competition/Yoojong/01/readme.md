# [백준- 골5] 토마토 (7569)
 
## ⏰  **time**

3시간

## :pushpin: **Algorithm**

bfs

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
1. bfs
    ```
    for i in range(6):
            nx = dx[i] + x
            ny = dy[i] + y
            nz = dz[i] + z
            if 0 <= nx < m and 0 <= ny <n and 0<= nz < h and **boxes[nz][ny][nx] == 0**:
                boxes[nz][ny][nx] = boxes[z][y][x] + 1
                q.appendleft((nx,ny,nz))
    ```

## :black_nib: **Review**
- visited 를 사용해서 메모리 초과가 나와 수정 하느라 너무 오래걸렸다.
- 언제 visited를 사용해야하는지 안해야하는지 잘 모르겠는데 앞으로 이런 문제를 풀 때는 visited를 사용하지 말아야 겠다는 것을 알았다.
