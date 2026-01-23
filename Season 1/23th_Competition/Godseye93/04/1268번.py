import sys

# input = sys.stdin.readline

n = int(input())
s = [[int(x) for x in input().split()] for _ in range(n)]
d = [[0] * n for _ in range(n)]
p = [0] * n

for i in range(n):
    for j in range(5):
        for k in range(n):
            if s[i][j] == s[k][j]:
                d[i][k] = 1

for i, x in enumerate(d):
    p[i] = sum(x)


def f(p):
    for i, x in enumerate(p):
        if x == max(p):
            print(i + 1)
            return


f(p)
