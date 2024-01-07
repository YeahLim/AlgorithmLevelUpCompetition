import sys

input = sys.stdin.readline
a1, a2, a3 = map(int, input().split())
b1, b2, b3 = map(int, input().split())

a = 3 * a1 + 20 * a2 + 120 * a3
b = 3 * b1 + 20 * b2 + 120 * b3

if a > b:
    print('Max')
elif a < b:
    print('Mel')
else:
    print('Draw')