n = int(input())

dp = [n - i for i in range(n+1)]
parents = [i for i in range(n+1)]

for i in range(n, 0, -1):

    if i < n and dp[i] >= dp[i+1] + 1:
        parents[i] = i+1
        dp[i] = dp[i+1] + 1

    if i / 3 == i // 3 and dp[i//3] > dp[i] + 1:
        parents[i//3] = i
        dp[i//3] = dp[i] + 1

    if i / 2 == i // 2 and dp[i//2] > dp[i] + 1:
        parents[i//2] = i
        dp[i//2] = dp[i] + 1


print(dp[1])
rlt = '1'
idx = parents[1]

while True:
    rlt = f'{idx} {rlt}'
    if idx == n:
        break
    idx = parents[idx]
if n != 1:
    print(rlt)
else:
    print(1)
