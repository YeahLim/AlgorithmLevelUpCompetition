import sys
import math

input = sys.stdin.readline

a, b = map(str, input().strip().split(':'))
n = int(a)
m = int(b)

g = math.gcd(n, m)

print(f"{n//g}:{m//g}")