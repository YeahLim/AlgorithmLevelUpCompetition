import sys
import heapq
n = int(sys.stdin.readline())
m = int(sys.stdin.readline())

graph = [[] for _ in range(n+1)]
for _ in range(m):
    a, b, cost = map(int, sys.stdin.readline().split())
    graph[a].append([b,cost])
start, end = map(int,sys.stdin.readline().split())
heap = []
costs = [1e9 for _ in range(n+1)]
costs[start] = 0

heapq.heappush(heap, [0, start])
while heap:
    current_cost, current_node = heapq.heappop(heap)
    if costs[current_node] < current_cost:
        continue

    for next_node, next_cost in graph[current_node]:
        sum_cost = current_cost + next_cost
        if costs[next_node] <= sum_cost:
            continue

        costs[next_node] = sum_cost
        heapq.heappush(heap, [sum_cost, next_node])
print(costs[end])