import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = set()
for _ in range(n):
    arr.add(input().rstrip())
cnt = 0
for _ in range(m):
    if input().rstrip() in arr:
        cnt += 1
print(cnt)