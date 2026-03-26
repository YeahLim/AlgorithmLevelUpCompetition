import sys
from math import gcd

input = sys.stdin.read
data = input().split()

N = int(data[0])
rings = list(map(int, data[1:]))

first = rings[0]

for i in range(1, N):
    g = gcd(first, rings[i])
    a = first // g
    b = rings[i] // g
    print(f"{a}/{b}")