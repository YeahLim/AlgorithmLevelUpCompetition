#실1, 1697
import sys
from collections import deque
n, k = map(int, sys.stdin.readline().split())
visited = [False for i in range(100_001)]
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
bfs(n)