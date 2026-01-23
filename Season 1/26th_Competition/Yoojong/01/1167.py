#트리의 지름 골2

import sys
from collections import deque

n = int(sys.stdin.readline())

graph = [[] * (n+1) for _ in range(n+1)]
visited = [False for i in range(n+1)]
for _ in range(n):
    info = list(map(int, sys.stdin.readline().split()))
    current = info[0]
    count = 0
    loc = 0
    for i in info[1:-1]:
        if count %2 == 0:
            loc = i
            count +=1
        else:
            graph[current].append((loc, i))
            count +=1

def bfs(start):
    q = deque()
    q.append((start, 0))
    visited = [-1] * (n + 1)
    visited[start] = 0
    res = [0, 0]  # start로부터 가장 먼 거리에 있는 노드와 거리 값

    while q:
        cnt_node, cnt_dist = q.popleft()

        for adj_node, adj_dist in graph[cnt_node]:
            if visited[adj_node] == -1:
                cal_dist = cnt_dist + adj_dist
                q.append((adj_node, cal_dist))
                visited[adj_node] = cal_dist
                if res[1] < cal_dist:
                    res[0] = adj_node
                    res[1] = cal_dist
    return res

point, _ = bfs(1)
print(bfs(point)[1])