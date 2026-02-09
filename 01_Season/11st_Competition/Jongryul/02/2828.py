import sys
input = sys.stdin.readline

n, m = map(int, input().split())
j = int(input())

s, e = 1, m
cnt = 0
for _ in range(j):
    pos = int(input())
    if pos < s:
        dif = s - pos
        s -= dif
        e -= dif
        cnt += dif
    elif pos > e:
        dif = pos - e
        s += dif
        e += dif
        cnt += dif
print(cnt)