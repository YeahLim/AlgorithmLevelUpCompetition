import sys
input = sys.stdin.readline

n = int(input())
arr = sorted([int(input()) for _ in range(n)], reverse=True)
rlt = 0
for i in range(0, n, 3):
    rlt += arr[i]
    if i + 1 < n:
        rlt += arr[i+1]
print(rlt)