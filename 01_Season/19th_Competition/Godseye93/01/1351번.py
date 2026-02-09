import sys
from collections import defaultdict

input = sys.stdin.readline

sys.setrecursionlimit(10**6)

memo = defaultdict(int)

n, p, q = map(int, input().split())

def infinite_sequence(x):
    if x == 0:
        return 1
    if x not in memo:
        memo[x] = infinite_sequence(x // p) + infinite_sequence(x // q)
    return memo[x]

print(infinite_sequence(n))
