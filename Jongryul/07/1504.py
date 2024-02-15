import sys
from heapq import heappop, heappush

input = sys.stdin.readline

n, e = map(int, input().split())

arr = [[] for _ in range(n+1)]

for _ in range(e):
	a, b, c = map(int, input().split())
	arr[a].append((b, c))
	arr[b].append((a, c))
v1, v2 = map(int, input().split())

def dij(s):
	distance = [1e9] * (n+1)
	q = []
	heappush(q, (0, s))
	distance[s] = 0
	while q:
		cnt, now = heappop(q)

		if cnt > distance[now]:
			continue
		for i in arr[now]:
			cost = cnt + i[1]

			if cost < distance[i[0]]:
				distance[i[0]] = cost
				heappush(q, (cost, i[0]))
	return distance

d0 = dij(1)
d1 = dij(v1)
d2 = dij(v2)

rlt1 = d0[v1] + d1[v2] + d2[n]
rlt2 = d0[v2] + d1[n] + d2[v1]

rlt = min(rlt1, rlt2)

if rlt < 1e9:
	print(rlt)
else:
	print(-1)
