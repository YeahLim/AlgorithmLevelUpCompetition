import sys
from collections import deque
input = sys.stdin.readline

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def bfs(graph, a, b):
    queue = deque()
    queue.append((a, b))    # 그래프의 좌표(a, b) = 노드

    # 반복문을 통해 queue에 노드 정보가 없을때 까지(미로 탐색이 끝날때 까지) 반복
    while queue:
        x, y = queue.popleft()

        # 현재 노드와 연결이 되어 있고(인접해 있고), 방문 처리가 되지 않은 노드 찾기
        for i in range(4):  # 상하좌우 살피기
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or nx >= N or ny < 0 or ny >= M:      # 좌표값이 그래프를 벗어날 경우 예외처리
                continue

            if graph[nx][ny] == 1:      # 인접하고 미로 길인 노드일때
                graph[nx][ny] = graph[x][y] + 1       # 현재 노드의 값에 1을 더해 해당 노드의 행렬 값을 변경해준다.

                queue.append((nx, ny))
    return graph


N, M = map(int, input().split())        # 지도의 크기
graph = [list(map(int, input().strip())) for _ in range(N)]     # 단지 정보 그래프
#print(graph)

# graph 전체를 탐색 - 1이 있는지 찾아본다.
bfs(graph, 0, 0)

#print(graph)
print(graph[N-1][M-1])