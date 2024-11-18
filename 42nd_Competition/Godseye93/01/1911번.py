import sys

input = sys.stdin.readline

n, l = map(int, input().split())
p = [list(map(int, input().split())) for _ in range(n)]
p.sort(key=lambda x: x[0])

pos = p[0][0]
total = 0

for s, e in p:
    if pos > e:
        continue
    elif pos < s:
        pos = s
    dist = e - pos
    count = dist // l + (1 if dist % l > 0 else 0)
    pos += count * l
    total += count

print(total)
