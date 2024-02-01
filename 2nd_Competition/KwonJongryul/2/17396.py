import sys
from heapq import heappop, heappush
input = sys.stdin.readline


n, m = map(int, input().split())
ward = list(map(int, input().rstrip().split()))

distance = [1e11] * (n)
graph = [[] for _ in range(n)]

for _ in range(m):
	s, e, l = map(int, input().split())
	# if ward[s] or (ward[e] and e < n-1):
	# 	continue
	graph[s].append((e, l))
	graph[e].append((s, l))

q = []
heappush(q, (0, 0))
while q:
	cst, now = heappop(q)
	if cst > distance[now] or ward[now]:
		continue
	for i in graph[now]:
		cost = cst + i[1]
		if cost < distance[i[0]]:
			distance[i[0]] = cost
			heappush(q, (cost, i[0]))

if distance[n-1] != 1e11:
	print(distance[n-1])
else:
	print(-1)
