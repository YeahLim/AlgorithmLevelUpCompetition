import sys

input = sys.stdin.readline

n = int(input())

if n == 1:
    print(4)
else:
    a, b = 1, 1          # fib[n-1], fib[n]
    for _ in range(3, n+1):
        a, b = b, a + b

    print(4 * b + 2 * a)