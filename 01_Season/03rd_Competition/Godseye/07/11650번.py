import sys

input = sys.stdin.readline

n = int(input())
lst = []
for _ in range(n):
    a, b = map(int, input().split())
    lst.append([a, b])
lst.sort()
for i in lst:
    print(*i)
