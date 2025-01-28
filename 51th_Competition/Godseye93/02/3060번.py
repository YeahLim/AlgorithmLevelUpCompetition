import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    m = sum(list(map(int,input().split())))
    d = 1
    while n >= m:
        d += 1
        m = 4 * m
    print(d)