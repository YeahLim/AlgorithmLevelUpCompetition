#숨바꼭질 3 골5

import sys
from collections import deque
n, k = map(int, sys.stdin.readline().split())

def bfs():
    visited = [-1] * 100001
    visited[n] = 0

    q = deque([n])

    while q:
        cur = q.popleft()

        if cur == k:
            return visited[cur]

        for next in (cur+1, cur-1, cur*2):
            if 0 <= next <= 100000 and visited[next] == -1:
                if next == cur*2:
                    visited[next] = visited[cur]
                    q.appendleft(next)
                else:
                    visited[next] = visited[cur] + 1
                    q.append(next)
print(bfs())