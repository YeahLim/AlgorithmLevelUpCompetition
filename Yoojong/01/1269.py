import sys

n = map(int, sys.stdin.readline().split())
a = map(int, sys.stdin.readline().split())
b = map(int, sys.stdin.readline().split())

a = set(a)
b = set(b)
temp_a = a-b
temp_b = b-a
print(len(temp_a) + len(temp_b))