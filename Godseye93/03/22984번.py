import sys

input = sys.stdin.readline

N = int(input())
parr = list(map(float, input().split()))
ans = sum(parr)

for i in range(1, N):
    ans += (parr[i-1] * (1 - parr[i]) + (1 - parr[i-1]) * parr[i])

print(f"{ans:.6f}")
