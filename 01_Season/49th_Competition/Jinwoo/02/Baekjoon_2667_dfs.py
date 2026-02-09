import sys
from collections import deque

input = sys.stdin.readline

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def dfs(graph, x, y):
    if x < 0 or x >= N or y < 0 or y >= N:
        return False

    if graph[x][y] == 1:
        global count
        graph[x][y] = 0     # 방문처리
        count += 1

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            dfs(graph, nx, ny)
        return True

    return False



N = int(input())        # 지도의 크기
graph = [list(map(int, input().strip())) for _ in range(N)]     # 단지 정보 그래프
count = 0

# graph 전체를 탐색 - 1이 있는지 찾아본다.
cnt = []
for i in range(N):
    for j in range(N):
        if dfs(graph, i, j) == True:
            cnt.append(count)
            count = 0       # 그래프 깊이 탐색 후 count값 초기화


cnt.sort()      # 각 단지내 집의 수를 오름차순으로 정렬
print(len(cnt))
for i in range(len(cnt)):
    print(cnt[i])