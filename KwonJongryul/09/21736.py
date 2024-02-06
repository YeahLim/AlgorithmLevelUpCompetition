import sys
sys.setrecursionlimit(10**9)
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [input().rstrip() for _ in range(n)]
v = [[0] * m for _ in range(n)]
cnt = 0
def dfs(qr, qc):
    global cnt
    if arr[qr][qc] == 'P':
        cnt += 1
    for dr, dc in [(0, 1), (1, 0), (-1, 0), (0, -1)]:
        r, c = qr + dr, qc + dc
        if 0 <= r < n and 0 <= c < m and not v[r][c]:
            if arr[r][c] == 'O' or arr[r][c] == 'P':
                v[r][c] = 1
                dfs(r, c)


def f():
    for i in range(n):
        for j in range(m):
            if 'I' == arr[i][j]:
                dfs(i, j)
                v[i][j] = 1
                return
            
f()
if cnt:
    print(cnt)
else:
    print('TT')