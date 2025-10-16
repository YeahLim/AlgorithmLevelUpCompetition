import sys
input = sys.stdin.readline

def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b

N = int(input())
M = int(input())
graph = [list(map(int, input().split())) for _ in range(N)]
plan = list(map(int, input().split()))

parent = list(range(N + 1))

for i in range(N):
    for j in range(N):
        if graph[i][j] == 1:
            union_parent(parent, i + 1, j + 1)

root = find_parent(parent, plan[0])
possible = True
for city in plan:
    if find_parent(parent, city) != root:
        possible = False
        break

print("YES" if possible else "NO")