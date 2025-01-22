import sys
from collections import deque
input = sys.stdin.readline

T = int(input())    # 테스트 케이스 수
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def bfs(graph, a, b):
    queue = deque()
    queue.append((a, b))        # 시작 노드의 좌표 queue 에 넣기
    graph[b][a] = 0

    while queue:
        x, y = queue.popleft()

        # 현재 노드와 연결이 되어 있고(인접해 있고), 방문 처리가 되지 않은 노드 찾기
        for o in range(4):  # 상하좌우 살피기
            nx = x + dx[o]
            ny = y + dy[o]

            if nx < 0 or nx >= M or ny < 0 or ny >= N:  # 좌표값이 그래프를 벗어날 경우 예외처리
                continue

            if graph[ny][nx] == 1:  # 인접하고 방문처리가 되어있지 않은 노드
                graph[ny][nx] = 0  # 방문처리
                queue.append((nx, ny))


for i in range(T):
    M, N, K = map(int, input().split())     # M: 배추밭의 가로길이, N: 배추밭의 세로길이, K: 배추가 심어져 있는 위치의 개수
    graph = [[0]*M for _ in range(N)]
    count = 0

    # 배추 위치 행렬에 표기
    for j in range(K):
        bx, by = map(int, input().split())    # 배추가 심어져 있는 위치
        graph[by][bx] = 1
    #print(graph)

    for ay in range(N):
        for ax in range(M):
            if graph[ay][ax] == 1:
                bfs(graph, ax, ay)
                count += 1
    print(count)