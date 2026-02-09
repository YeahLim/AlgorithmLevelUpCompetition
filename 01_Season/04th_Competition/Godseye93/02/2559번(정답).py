import sys

input = sys.stdin.readline

n, k = map(int, input().split())
data = list(map(int, input().split()))

temSum = 0

for i in range(k):
    temSum += data[i]

maxTem = temSum

for start in range(n):
    if temSum > maxTem:
        maxTem = temSum

    if start + k >= n:
        break
    temSum -= data[start]
    temSum += data[start + k]

print(maxTem)