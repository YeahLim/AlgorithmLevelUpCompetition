import sys

input = sys.stdin.readline

g = int(input())
a = [x for x in range(1, 100001)]
b = [x for x in range(1, 100001)]

n = 100000
m = 100000

l, r = 0,0

ans = []

while l < n and r < m:
    tmp = (a[l] + b[r]) * (a[l] - b[r])
    if tmp == g: ans.append(a[l])
    if tmp < g:
        l += 1
        continue
    r += 1
if not ans:
    print(-1)
else:
    for y in ans: print(y)