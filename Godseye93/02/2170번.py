import sys

input = sys.stdin.readline

n = int(input())
lst = []

for _ in range(n):
    lst.append(tuple(map(int, input().split())))

lst.sort()

l = lst[0][0]
r = lst[0][1]
ans = 0

for i in range(1, n):
    if r >= lst[i][1]:
        continue

    elif lst[i][0] <= r < lst[i][1]:
        r = lst[i][1]

    elif r < lst[i][0]:
        ans += r - l
        l = lst[i][0]
        r = lst[i][1]

ans += r - l
print(ans)