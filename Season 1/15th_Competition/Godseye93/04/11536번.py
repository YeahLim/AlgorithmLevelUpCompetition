import sys

input = sys.stdin.readline

n = int(input().rstrip())
names = []

for _ in range(n):
    names.append(input().rstrip())

sorted_names = sorted(names)

if names == sorted_names:
    print("INCREASING")
elif names == sorted_names[::-1]:
    print("DECREASING")
else:
    print("NEITHER")
