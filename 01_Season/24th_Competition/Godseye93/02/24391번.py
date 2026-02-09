import sys

input = sys.stdin.readline


def find(parent, x):
    if x != parent[x]:
        parent[x] = find(parent, parent[x])  # Path compression
    return parent[x]


def union(parent, rank, a, b):
    rootA = find(parent, a)
    rootB = find(parent, b)

    if rootA != rootB:
        if rank[rootA] > rank[rootB]:
            parent[rootB] = rootA
        elif rank[rootA] < rank[rootB]:
            parent[rootA] = rootB
        else:
            parent[rootB] = rootA
            rank[rootA] += 1

num_elements, num_pairs = map(int, input().split())

parent = list(range(num_elements + 1))
rank = [0] * (num_elements + 1)

for _ in range(num_pairs):
    elem1, elem2 = map(int, input().split())
    union(parent, rank, elem1, elem2)

L = list(map(int, input().split()))

num_connections = 0
for i in range(1, len(L)):
    if find(parent, L[i - 1]) != find(parent, L[i]):
        num_connections += 1

print(num_connections)