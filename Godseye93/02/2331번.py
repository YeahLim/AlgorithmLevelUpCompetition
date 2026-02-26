import sys

input = sys.stdin.readline

A, P = map(int, input().split())
arr = []

cur = A
while cur not in arr:
    arr.append(cur)
    nxt = sum(int(d)**P for d in str(cur))
    cur = nxt

print(arr.index(cur))