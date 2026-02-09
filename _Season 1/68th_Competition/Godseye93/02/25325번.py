import sys

input = sys.stdin.readline

n = input()
names = input().split()

d = {}
for name in names:
    d.setdefault(name, 0)

for _ in range(int(n)):
    votes = input().split()
    for v in votes:
        if v in d:
            d[v] += 1

result = dict(sorted(d.items(), key=lambda x: x[1], reverse=True))

for k, v in result.items():
    print(k, v)