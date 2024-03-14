import sys

input = sys.stdin.readline

n = int(input())

arr = [0] + list(map(int, input().split()))

arr.sort()

presum = [0] * (n + 1)
powsum = [0] * (n + 1)

for i in range(1, n + 1):
    presum[i] = presum[i - 1] + arr[i]
    powsum[i] = powsum[i - 1] + arr[i] ** 2

MIN = float('inf')
ans = MIN
pos = -1
for k in range(1, n + 1):
    sum = (k - 1) * arr[k] - presum[k - 1] + presum[n] - presum[k] - (n - k) * arr[k]
    if ans > sum:
        ans = sum
        pos = k

print(arr[pos], end=" ")

ans = MIN
pos = -1

start = arr[1]
end = arr[n]
for k in range(1, 10001):
    sum = powsum[n] - 2 * k * presum[n] + n * k * k
    if ans > sum:
        ans = sum
        pos = k

print(pos)