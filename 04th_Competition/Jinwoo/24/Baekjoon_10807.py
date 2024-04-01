import sys
N = int(sys.stdin.readline())
Nlist = list(map(int, sys.stdin.readline().split()))
v = int(sys.stdin.readline())

print(Nlist.count(v))