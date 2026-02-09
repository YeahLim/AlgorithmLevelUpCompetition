import sys

input = sys.stdin.readline

n = int(input())
a = 2

while True:
    if (n == 1 or n == 2):
        print(n)
        break
    a *= 2
    if (a >= n):
        print((n - (a // 2)) * 2)
        break