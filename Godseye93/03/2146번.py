import sys

input = sys.stdin.readline

n = int(input())
a = 2

while True:
    if input == 1 or input == 2:
        print(input)
        break
    a *= 2
    if (a >= n):
        print((n - (a // 2)) * 2)
        break