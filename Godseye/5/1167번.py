import sys
sys.setrecursionlimit(10 ** 9)
input = sys.stdin.readline

n = int(input())

g = [[] for _ in range(n+1)]

def dfs(x,y):
    for a,b in g[x]:
        if visited[a] == -1:
            visited[a] = b + y
            dfs(a, b+y)

for _ in range(n):
    w = list(map(int,input().split()))
    for j in range(1, len(w) -2, 2):
        g[w[0]].append([w[j], w[j+1]])



visited = [-1] * (n+1)
visited[1] = 0
dfs(1,0)

start = visited.index(max(visited))
visited = [-1] * (n + 1)
visited[start] = 0
dfs(start, 0)

print(max(visited))