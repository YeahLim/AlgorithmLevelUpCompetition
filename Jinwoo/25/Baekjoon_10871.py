import sys
N, X = map(int, sys.stdin.readline().split())
Nlist = list(map(int, sys.stdin.readline().split()))

for i in Nlist:
    if i < X :
        print(i, end=' ')