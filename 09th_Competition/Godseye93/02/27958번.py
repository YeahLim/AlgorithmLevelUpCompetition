import sys

input = sys.stdin.readline

def func(index):
    global origin, cache, r

    if index >= len(origin):
        return 0

    if cache[index] != -1:
        return cache[index]

    cache[index] = func(index + 1) + 1

    for key, value in r:
        if origin[index:index + len(key)] == key:
            cache[index] = max(cache[index], func(index + len(key)) + value)

    return cache[index]

origin = input().strip()
m = int(input())
cache = [-1 for _ in range(len(origin) + 1)]
r = []

for _ in range(m):
    key, value = input().split()
    r.append((key, int(value)))

print(func(0))