import sys

input = sys.stdin.readline

T = int(input())

for i in range(T):
    s, p = input().split()
    s = s.replace(p, '0')

    print(len(s))
