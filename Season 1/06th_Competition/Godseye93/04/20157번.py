import sys
import collections

input = sys.stdin.readline

n = int(input())
data = [list(map(int,input().split())) for _ in range(n)]

slope = collections.defaultdict(int)

for x, y in data:
    if x == 0 and y == 0:
        continue
    elif x == 0:
        slope[(0, -1 if y < 0 else 1)] += 1
    elif y == 0:
        slope[(-1 if x < 0 else 1, 0)] += 1
    else:
        a, b = x, y
        while b != 0:
            a, b = b, a % b
        gcd = abs(a)
        slope[(x // gcd, y // gcd)] += 1

ans = max(slope.values())

print(ans)