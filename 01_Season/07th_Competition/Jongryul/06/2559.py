import sys
input = sys.stdin.readline

n, k = map(int, input().split())
arr = list(map(int, input().split()))

tmp = sum(arr[:k])
mx = tmp

for i in range(k, n):
    tmp -= arr[i-k]
    tmp += arr[i]
    mx = max(tmp, mx)
print(mx)