import sys

input = sys.stdin.readline

N, K = map(int, input().split())
temperatures = sorted([int(input()) for _ in range(N)])

gaps = []
for i in range(1, N):
    gaps.append(temperatures[i] - temperatures[i-1] - 1)

gaps.sort()

result = sum(gaps[:N-K]) if N-K > 0 else 0

result += N

print(result)