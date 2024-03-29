import sys

input = sys.stdin.readline

n = int(input())

arr = list()
result = set()


def dfs():
    if len(arr) > 0:
        result.add(int("".join(map(str, arr))))

    for i in range(0, 10):
        if len(arr) == 0 or arr[-1] > i:
            arr.append(i)
            dfs()
            arr.pop()

if n == 0:
    print(0)
else:
    try:
        dfs()
        result = list(result)
        result.sort()
        print(result[n])
    except:
        print(-1)
