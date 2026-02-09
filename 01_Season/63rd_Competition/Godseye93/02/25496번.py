import sys

input = sys.stdin.readline

p, n = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
result = 0
for fatigue in a:
    if p >= 200:
        break
    p += fatigue
    result += 1
print(result)