import sys

input = sys.stdin.readline

def find(parent, x):
    if parent[x] != x:
        parent[x] = find(parent, parent[x])
    return parent[x]

def union(parent, a, b):
    a = find(parent, a)
    b = find(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b

n = int(input())
parent = [i for i in range(n+1)]

for _ in range(n-2):
    a, b = map(int, input().split())
    union(parent, a, b)

for i in range(1, n+1):
    if find(parent, i) != find(parent, 1):
        print(1, i)
        break
