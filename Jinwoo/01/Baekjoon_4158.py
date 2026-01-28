import sys
input = sys.stdin.readline

while True:
    N, M = map(int, input().split())
    if N == 0 and M == 0:
        break

    sang = [int(input()) for _ in range(N)]
    sun = [int(input()) for _ in range(M)]

    i = j = 0
    count = 0

    while i < N and j < M:
        if sang[i] == sun[j]:
            count += 1
            i += 1
            j += 1
        elif sang[i] < sun[j]:
            i += 1
        else:
            j += 1

    print(count)
