import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

visited = [False] * n
current = []
max_diff = 0


def dfs(depth):
    global max_diff
    if depth == n:
        total = 0
        for i in range(n - 1):
            total += abs(current[i] - current[i + 1])
        max_diff = max(max_diff, total)
        return

    for i in range(n):
        if not visited[i]:
            visited[i] = True
            current.append(arr[i])
            dfs(depth + 1)
            current.pop()
            visited[i] = False


dfs(0)
print(max_diff)
