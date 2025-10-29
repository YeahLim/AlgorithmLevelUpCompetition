import sys
input = sys.stdin.readline

N = int(input())
used = [False] * (N+1)
path = []

def dfs():
    if len(path) == N:
        print(*path)
        return
    for i in range(1, N+1):
        if not used[i]:
            used[i] = True
            path.append(i)

            dfs()

            path.pop()
            used[i] = False

dfs()
