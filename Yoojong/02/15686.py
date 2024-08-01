#치킨 배달 골5

import sys
from itertools import combinations
n, m = map(int, sys.stdin.readline().split())

graph = []
for i in range(n):
    graph.append(list(map(int, sys.stdin.readline().split())))

chicken_list = []
house_list = []
for i in range(n):
    for j in range(n):
        #치킨집 주소
        if graph[i][j] == 2:
            chicken_list.append((i,j))
        #집 주소
        if graph[i][j] == 1:
            house_list.append((i,j))

answer = 1e9
for chicken in combinations(chicken_list, m):
        chicken_dist_total = 0
        for house in house_list:
            chicken_dist = int(1e9)
            for i in range(m):
                chicken_dist = min(chicken_dist, abs(house[0] - chicken[i][0]) + abs(house[1] - chicken[i][1]))
            chicken_dist_total += chicken_dist
        answer = min(answer, chicken_dist_total)
print(answer)



