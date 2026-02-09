import sys

input = sys.stdin.readline

n = int(input())

lst = []

for _ in range(n):
    num = float(input())
    lst.append(num)


lst.sort()

for i in range(7):
    print("{:.3f}".format(lst[i]))