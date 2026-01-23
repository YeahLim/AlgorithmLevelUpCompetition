import sys
from math import sqrt

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find(g, l):
    factor = l // g
    for a in range(int(sqrt(factor)), 0, -1):
        if factor % a == 0:
            b = factor // a
            if gcd(a, b) == 1:
                return a * g, b * g
    return None

input = sys.stdin.readline
g, l = map(int, input().split())
optimal_pair = find(g, l)
if optimal_pair:
    print(optimal_pair[0], optimal_pair[1])