import sys

input = sys.stdin.readline

n = int(input())
ans = 0
for _ in range(n):
    a, b = map(int, input().split())
    mod = ans % (a + b)
    if mod < b:
        ans += b - mod
    ans += 1

print(ans) 