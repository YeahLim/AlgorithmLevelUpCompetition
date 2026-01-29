from collections import deque
import sys

input = sys.stdin.readline

N, M = map(int, input().split())

move = [i for i in range(101)]

for _ in range(N + M):
    x, y = map(int, input().split())
    move[x] = y

dist = [-1] * 101
dist[1] = 0

q = deque([1])

while q:
    now = q.popleft()

    for i in range(1, 7):
        nxt = now + i
        if nxt > 100:
            continue

        nxt = move[nxt]

        if dist[nxt] == -1:
            dist[nxt] = dist[now] + 1
            q.append(nxt)

print(dist[100])