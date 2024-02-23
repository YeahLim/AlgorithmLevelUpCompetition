import sys
input = sys.stdin.readline

n = int(input())
arr = sorted([int(input()) for _ in range(n)], reverse=True)

mx = 0

for i in range(n):
    if int(arr[i] * (i+1)) > mx:
        mx = int(arr[i] * (i+1))
print(mx)