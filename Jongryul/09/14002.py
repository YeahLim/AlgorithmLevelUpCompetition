import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
dp = [1] * n
parent = [i for i in range(n)]

for i in range(n):
    for j in range(i+1, n):
        if arr[i] < arr[j]:
            if dp[i] + 1 > dp[j]:
                dp[j] = dp[i]+1
                parent[j] = i

mx = dp[0]
max_idx = 0
for i in range(n):
    if dp[i] > mx:
        mx = dp[i]
        max_idx = i

rlt = []
p = max_idx
while True:
    rlt.append(arr[p])
    if arr[parent[p]] == arr[p]:
        break
    p = parent[p]

print(mx)
print(*reversed(rlt))