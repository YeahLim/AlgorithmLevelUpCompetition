import sys
from collections import defaultdict

input = sys.stdin.readline

sys.setrecursionlimit(10**6)

memo = defaultdict(int)

N, P, Q, X, Y = map(int, input().split())

def infinite_sequence_2(n):
    if n <= 0:
        return 1
    if n not in memo:
        memo[n] = infinite_sequence_2(n // P - X) + infinite_sequence_2(n // Q - Y)
    return memo[n]

print(infinite_sequence_2(N))
