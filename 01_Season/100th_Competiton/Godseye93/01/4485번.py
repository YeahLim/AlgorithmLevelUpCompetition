import sys
import heapq

input = sys.stdin.readline

problem = 1

while True:
    N = int(input())

    if N == 0:
        break

    cave = []
    for _ in range(N):
        row = list(map(int, input().split()))
        cave.append(row)

    INF = 999_999_999
    dist = [[INF] * N for _ in range(N)]
    dist[0][0] = cave[0][0]

    pq = []
    heapq.heappush(pq, (cave[0][0], 0, 0))

    dy = [-1, 1, 0, 0]
    dx = [0, 0, -1, 1]

    while pq:
        cost, y, x = heapq.heappop(pq)

        if cost > dist[y][x]:
            continue

        for d in range(4):
            ny = y + dy[d]
            nx = x + dx[d]

            if 0 <= ny < N and 0 <= nx < N:
                next_cost = cost + cave[ny][nx]

                if next_cost < dist[ny][nx]:
                    dist[ny][nx] = next_cost
                    heapq.heappush(pq, (next_cost, ny, nx))

    print(f"Problem {problem}: {dist[N - 1][N - 1]}")
    problem += 1