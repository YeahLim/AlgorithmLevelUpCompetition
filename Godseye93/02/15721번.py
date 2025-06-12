import sys
input = sys.stdin.readline

p = int(input().strip())
t = int(input().strip())
k = int(input().strip())

c = []
b = d = 1
r = 0

while True:
    s = b
    r += 1
    for _ in range(2):
        c.append((b, 0))
        b += 1
        c.append((d, 1))
        d += 1
    for _ in range(r+1):
        c.append((b, 0))
        b += 1
    for _ in range(r+1):
        c.append((d, 1))
        d += 1
    if s < t <= b:
        print(c.index((t, k)) % p)
        break