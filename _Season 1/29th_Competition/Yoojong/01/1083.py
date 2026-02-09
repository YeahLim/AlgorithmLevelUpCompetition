import sys
n = int(sys.stdin.readline())
arr = list(map(int,sys.stdin.readline().split()))
s = int(sys.stdin.readline())

for i in range(n):
    if not s:
        break
    max_val = max(arr[i:i+s+1])
    max_idx = arr.index(max_val)
    while max_idx != i and s:
        arr[max_idx], arr[max_idx-1] = arr[max_idx-1], arr[max_idx]
        max_idx -= 1
        s -= 1

print(*arr)