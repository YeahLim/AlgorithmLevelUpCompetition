from collections import deque
import sys

input = sys.stdin.readline


def can_go(a, b):
    return abs(a[0] - b[0]) + abs(a[1] - b[1]) <= 1000


def solve():
    n = int(input())
    stores = []

    home = tuple(map(int, input().split()))
    for _ in range(n):
        stores.append(tuple(map(int, input().split())))
    festival = tuple(map(int, input().split()))

    places = [home] + stores + [festival]

    graph = [[] for _ in range(n + 2)]

    for i in range(n + 2):
        for j in range(i + 1, n + 2):
            if can_go(places[i], places[j]):
                graph[i].append(j)
                graph[j].append(i)

    visited = [False] * (n + 2)
    q = deque([0])
    visited[0] = True

    while q:
        now = q.popleft()

        if now == n + 1:
            return "happy"

        for next_place in graph[now]:
            if not visited[next_place]:
                visited[next_place] = True
                q.append(next_place)

    return "sad"


t = int(input())
for _ in range(t):
    print(solve())