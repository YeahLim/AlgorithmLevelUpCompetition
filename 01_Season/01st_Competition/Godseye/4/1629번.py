import sys

input = sys.stdin.readline

a, b, c = map(int, input().split())


def solve(a, n):
    if n == 1:
        return a % c

    num = solve(a, n // 2)

    if n % 2 == 0:
        return (num * num) % c
    else:
        return (num * num * a) % c


print(solve(a, b))
