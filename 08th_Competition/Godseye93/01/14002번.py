import sys

input = sys.stdin.read
data = input().split()

N = int(data[0])
A = list(map(int, data[1:]))

dp = [1] * N
prev = [-1] * N

max_len = 1
max_idx = 0

for i in range(N):
    for j in range(i):
        if A[j] < A[i] and dp[j] + 1 > dp[i]:
            dp[i] = dp[j] + 1
            prev[i] = j

    if dp[i] > max_len:
        max_len = dp[i]
        max_idx = i

print(max_len)

lis = []
current = max_idx
while current != -1:
    lis.append(A[current])
    current = prev[current]

lis.reverse()
print(' '.join(map(str, lis)))