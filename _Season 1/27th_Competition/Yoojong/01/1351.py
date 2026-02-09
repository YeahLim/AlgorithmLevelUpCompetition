#무한 수열 골 5

import sys

n, p, q = map(int, sys.stdin.readline().split())
dict = {}
dict[0] = 1

def find(n):
    if n in dict:
        return dict[n]

    else:
        dict[n] = find(n//p) + find(n//q)
        return dict[n]

print(find(n))

