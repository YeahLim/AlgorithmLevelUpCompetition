import sys
from heapq import heappop, heappush
input = sys.stdin.readline

n, m, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
for _ in range(m):
	s, e, l = map(int, input().split())
	graph[s].append((e, l))
mx = 0
for i in range(1, n+1):
	distance = [1e9] * (n+1)
	q = []
	heappush(q, (0, i))
	while q:
		cst, now = heappop(q)
		if cst > distance[now]:
			continue
		for j in graph[now]:
			cost = cst + j[1]
			if cost < distance[j[0]]:
				distance[j[0]] = cost
				heappush(q, (cost, j[0]))
	c = distance[x]

	distance = [1e9] * (n+1)
	q = []
	heappush(q, (c, x))
	while q:
		cst, now = heappop(q)
		if cst > distance[now]:
			continue
		for j in graph[now]:
			cost = cst + j[1]
			if cost < distance[j[0]]:
				distance[j[0]] = cost
				heappush(q, (cost, j[0]))
	mx = max(mx, distance[i])
print(mx)