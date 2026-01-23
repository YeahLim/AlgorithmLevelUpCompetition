import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

max_len = 1
inc = dec = 1

for i in range(1, n):
    if arr[i] >= arr[i-1]:
        inc += 1
        max_len = max(max_len, inc)
    else:
        inc = 1

    if arr[i] <= arr[i-1]:
        dec += 1
        max_len = max(max_len, dec)
    else:
        dec = 1

print(max_len)