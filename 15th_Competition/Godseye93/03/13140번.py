import itertools
import sys

input = sys.stdin.readline

nums = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
n = int(input().rstrip())

for s in itertools.permutations(nums, 7):
    h, e, l, o, w, r, d = s
    if h == 0 or w == 0:
        continue

    hello = 10000 * h + 1000 * e + 100 * l + 10 * l + o
    world = 10000 * w + 1000 * o + 100 * r + 10 * l + d

    if hello + world == n:
        print(f"  {hello:>7}")
        print(f"+ {world:>7}")
        print("-" * 7)
        print(f"{n:>7}")
        break
else:
    print("No Answer")
