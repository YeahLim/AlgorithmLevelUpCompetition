import sys

input = sys.stdin.readline

N = int(input())

graph = [[] for _ in range(N + 1)]

for i in range(1, N + 1):
    graph[i].append(int(input()))


def find_cycles(start_node):
    if not visited[start_node]:
        visited[start_node] = True
        for neighbor in graph[start_node]:
            temp_up.add(start_node)
            temp_bottom.add(neighbor)

            if temp_up == temp_bottom:
                results.extend(list(temp_bottom))
                return

            find_cycles(neighbor)

    visited[start_node] = False


results = []

for i in range(1, N + 1):
    visited = [False] * (N + 1)
    temp_up = set()
    temp_bottom = set()

    find_cycles(i)

unique_results = sorted(set(results))

print(len(unique_results))
for result in unique_results:
    print(result)
