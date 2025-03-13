import sys
import math

input = sys.stdin.readline
N, M = map(int, input().split())
grid = [list(map(int, list(input().strip()))) for _ in range(N)]

def is_square(n):
    if n < 0:
        return False
    root = int(math.sqrt(n))
    return root * root == n

max_square = -1

for i in range(N):
    for j in range(M):
        for di in range(-N, N+1):
            for dj in range(-M, M+1):
                if di == 0 and dj == 0:
                    continue
                num = 0
                ni, nj = i, j
                while 0 <= ni < N and 0 <= nj < M:
                    num = num * 10 + grid[ni][nj]
                    if is_square(num):
                        max_square = max(max_square, num)
                    ni += di
                    nj += dj

print(max_square)