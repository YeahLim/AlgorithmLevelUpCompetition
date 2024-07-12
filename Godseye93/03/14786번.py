import sys
from math import sin, copysign

input = sys.stdin.readline
a, b, c = list(map(int, input().split()))
sign = lambda x: copysign(1, x)


def function(x):
    return a * x + b * sin(x) - c


tolerance = 10 ** (-9)
lower_bound, upper_bound = 0, 2 * c

while abs(lower_bound - upper_bound) > tolerance:
    mid_point = (lower_bound + upper_bound) / 2
    if function(mid_point) <= 0:
        lower_bound = mid_point
    else:
        upper_bound = mid_point

print(mid_point)