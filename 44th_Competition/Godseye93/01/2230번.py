import sys

input = sys.stdin.readline

n, m = map(int,input().split())

lst = []

for i in range(n):
    lst.append(int(input()))

lst.sort()

s = 0
e = 0
min_value = sys.maxsize

while s < n and e < n:
    ans = lst[e] - lst[s]
    if ans >= m:
        min_value = min(lst[e] - lst[s], min_value)
        s += 1
    else:
        e +=1

print(min_value)