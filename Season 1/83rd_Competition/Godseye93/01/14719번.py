import sys

input = sys.stdin.readline

H, W = map(int, input().split())
blocks = list(map(int, input().split()))

total_water = 0

for i in range(1, W - 1):
    left_max = max(blocks[:i])
    right_max = max(blocks[i + 1:])
    water_height = min(left_max, right_max) - blocks[i]
    if water_height > 0:
        total_water += water_height

print(total_water)
