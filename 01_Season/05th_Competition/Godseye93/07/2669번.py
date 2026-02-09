import sys

input = sys.stdin.readline

arr = [[0] * 100 for _ in range(100)]
ans = 0

for _ in range(4):
    a, b, c, d = map(int, input().split())
    for i in range(b, d):
        for j in range(a, c):
            arr[i][j] = 1

for i in arr:
    ans += sum(i)
print(ans)
