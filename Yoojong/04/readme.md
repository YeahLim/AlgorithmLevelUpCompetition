# [백준 - 실1] 2178. 미로탐색 
 
## ⏰  **time**

1시간 20분

## :pushpin: **Algorithm**
bfs

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
1. bfs
```python
		
queue = deque([(0,0)])
while queue:
    x, y = queue.pop()
    for i in range(4):
        nx, ny = x+dx[i], y+dy[i]
        if 0<= nx <n and 0<=ny <m:
            if graph[nx][ny] == 1:
                queue.appendleft((nx,ny))
                graph[nx][ny] = graph[x][y] +1
```

## :black_nib: **Review**
- dfs가 유리한 경우: 경로의 특징을 저장해야하는 경우 (경로의 가중치, 이동과정에서의 제약)
- bfs가 유리한 경우: 최단 거리 최단횟수 구하는 경우
- 미로같은 문제는 반드시 이동 표현을 이처럼 해주자
- dx = [0,0,1,-1]
- dy = [1, -1, 0,0]
