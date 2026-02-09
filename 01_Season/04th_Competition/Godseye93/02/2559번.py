import sys

input = sys.stdin.readline

n, k = map(int, input().split())
data = list(map(int, input().split()))

maxTem = 0

for start in range(n):
    if start + k > n:
        break
    temSum = 0
    for i in range(k):
        temSum += data[start + i]
    if temSum > maxTem:
        maxTem = temSum

print(maxTem)
