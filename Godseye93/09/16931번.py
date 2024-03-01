import sys

input = sys.stdin.readline

n, m = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(n)]
dx, dy = [-1, 0, 1, 0], [0, 1, 0, -1]
ans = 0

for i in range(n):
    for j in range(m):
        if arr[i][j]:
            ans += arr[i][j] * 4 + 2
            for k in range(4):
                nx, ny = i + dx[k], j + dy[k]
                if 0 <= nx < n and 0 <= ny < m:
                    ans -= min(arr[i][j], arr[nx][ny])

print(ans)