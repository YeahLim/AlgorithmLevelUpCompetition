import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
p1, p2 = map(int, input().split())
m = int(input())
v = [0] * (n+1)
arr = [[] for _ in range(n+1)]

for _ in range(m):
	x, y = map(int, input().split())
	arr[x].append(y)
	arr[y].append(x)

q = deque([(p1, 0)])
v[p1] = 1
rlt = -1
while q:
	now, cnt = q.popleft()
	if now == p2:
		rlt = cnt
	for i in arr[now]:
		if not v[i]:
			q.append((i, cnt+1))
			v[i] = 1
print(rlt)