import sys

input = sys.stdin.readline

N, M = map(int, input().split())
abilities = [0] * M

for i in range(M):
    info = list(map(int, input().split()))
    for j in info[1:]:
        abilities[i] |= 1 << (j-1)

answer = float('inf')

for mask in range(1, 1 << M):
    solved = 0
    count = 0
    for i in range(M):
        if mask & (1 << i):
            solved |= abilities[i]
            count += 1
    if solved == (1 << N) - 1:
        answer = min(answer, count)

if answer == float('inf'):
    print(-1)
else:
    print(answer)
