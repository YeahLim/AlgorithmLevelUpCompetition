import sys
from collections import defaultdict, deque
input = sys.stdin.readline

def bfs(k, v):
    visited = [0] * (n + 1)
    q = deque()
    q.append(v)
    visited[v] = 1
    cnt = 0
    while q:
        v = q.popleft()
        for i in m[v]:
            if not visited[i[0]]:
                if i[1] >= k:
                    q.append(i[0])
                    cnt += 1
                    visited[i[0]] = 1
    return cnt

n, q = map(int, input().split())
m = defaultdict(list)
for _ in range(n - 1):
    x, y, z = map(int, input().split())
    m[x].append((y, z))
    m[y].append((x, z))
for _ in range(q):
    k, v = map(int, input().split())
    print(bfs(k, v))