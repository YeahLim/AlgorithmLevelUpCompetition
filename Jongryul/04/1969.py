import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = sorted(list(map(int, input().split())))

for i in arr:
    if i <= m:
        m += 1
print(m)