import math
import sys

input = sys.stdin.readline

N, a, b = map(int, input().split())

round_count = 0

while a != b:
    a = math.ceil(a / 2)
    b = math.ceil(b / 2)
    round_count += 1

print(round_count)