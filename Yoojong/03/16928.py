#뱀과 사다리 골5
import sys
from collections import deque
n, m = map(int, sys.stdin.readline().split())
graph = [0 for _ in range(101)]
visited = [False for _ in range(101)]
for _ in range(n+m):
    start, end = map(int, sys.stdin.readline().split())
    graph[start] = end

def bfs(start):
    q = deque([])
    q.appendleft((start,0))
    ans=list()
    while q:
        current, count = q.pop()
        visited[current] = True
        if graph[current] != 0:
            current = graph[current]

        if current == 100:
            ans.append(count)
            continue

        count += 1
        for i in range(6,0,-1):
            temp = current + i
            if temp >100 or visited[temp] == True:
                continue
            q.appendleft((temp, count))
    return ans

ans = bfs(1)

print(min(ans))






