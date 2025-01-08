import sys
from collections import deque
input = sys.stdin.readline

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def bfs(graph, a, b):
    N = len(graph)
    queue = deque()
    queue.append((a, b))    # 그래프의 좌표(a, b) = 노드
    graph[a][b] = 0
    count = 1

    # 반복문을 통해 queue에 노드 정보가 없을때 까지(탐색이 끝날때 까지) 반복
    while queue:
        x, y = queue.popleft()

        # 현재 노드와 연결이 되어 있고(인접해 있고), 방문 처리가 되지 않은 노드 찾기
        for i in range(4):  # 상하좌우 살피기
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or nx >= N or ny < 0 or ny >= N:      # 좌표값이 그래프를 벗어날 경우 예외처리
                continue

            if graph[nx][ny] == 1:      # 인접하고 방문처리가 되어있지 않은 노드
                graph[nx][ny] = 0       # 방문처리
                count += 1
                queue.append((nx, ny))
    return count


N = int(input())        # 지도의 크기
graph = [list(map(int, input().strip())) for _ in range(N)]     # 단지 정보 그래프
#print(graph)

# graph 전체를 탐색 - 1이 있는지 찾아본다.
cnt = []
for i in range(N):
    for j in range(N):
        if graph[i][j] == 1:    # 1을 찾은 경우 bfs 함수를 돌려 graph에서 연결되어 있는 1을 지워준 후, 1의 개수를 cnt에 담아주자.
            cnt.append(bfs(graph, i, j))

cnt.sort()      # 각 단지내 집의 수를 오름차순으로 정렬
print(len(cnt))
for i in range(len(cnt)):
    print(cnt[i])