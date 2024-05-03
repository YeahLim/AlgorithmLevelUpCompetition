import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
m = int(input())

for i in range(1, n):
    arr[i] = arr[i-1] + arr[i]

for _ in range(m):
    s, e = map(int, input().split())
    s -= 1
    e -= 1
    
    if s > 0:
        print(arr[e] - arr[s-1])
    else:
        print(arr[e])