# [백준 실버1] 1679. 숨바꼭질
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**

bfs

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. bfs
```python
def bfs(x):
    q = deque([(x,0)])
    visited[x] = True
    while q:
        loc, count = q.pop()
        if loc == k:
            print(count)
            return
        if loc+1 <=100000 and not visited[loc+1]:
            visited[loc+1] = True
            q.appendleft((loc+1, count+1))
        if 2 * loc <=100000 and not visited[2*loc]:
            visited[2 * loc] = True
            q.appendleft((2*loc, count+1))
        if loc - 1 >= 0 and not visited[loc-1]:
            visited[loc - 1] = True
            q.appendleft((loc-1, count+1))
```

## :black_nib: **Review**
- 방문한 곳을 고려하지 않으면 메모리 초과 에러가 뜬다.
- 이를 visited 를 만들어서 해결하였다. 사실 정말 방문해서 true로 한게 아니라 queue에 들어가면 true로 하였다.
