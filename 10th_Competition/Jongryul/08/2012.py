import sys
input = sys.stdin.readline
n = int(input())


arr = sorted([int(input()) for _ in range(n)])
cnt = 0
for i in range(n):
    cnt += abs(arr[i] - (i+1))
print(cnt)