import sys
import math

m, n = map(int, sys.stdin.readline().split())
a, b = map(int, sys.stdin.readline().split())
x0 = int(sys.stdin.readline())

L = a * x0 + b
print(L)

if a == 0:
    print('0 0')
else:
    up = m
    down = int(n * math.fabs(a))
    print(up, down)