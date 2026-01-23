import sys
input = sys.stdin.readline

n = int(input())

tri_nums = []
sum_tri = 0
i = 1

while n > sum_tri:
    sum_tri += (i * (i + 1)) // 2
    tri_nums.append(sum_tri)
    i += 1

dp = [300001] * (n + 1)
for j in range(1, n + 1):
    for t in tri_nums:
        if t == j:
            dp[j] = 1
            break
        if t > j:
            break
        dp[j] = min(dp[j], dp[j - t] + 1)

print(dp[n])
