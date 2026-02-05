import sys
input = sys.stdin.read
data = input().split()

n = int(data[0])
nums = list(map(int, data[1:]))

nums.sort()

ans = 0
i = 0

while i < n:
    if i + 1 < n and nums[i] <= 0 and nums[i+1] <= 0:
        ans += nums[i] * nums[i+1]
        i += 2
    elif nums[i] <= 0:
        ans += nums[i]
        i += 1
    else:
        break

j = n - 1
while j >= i:
    if j - 1 >= i and nums[j] > 1 and nums[j-1] > 1:
        ans += nums[j] * nums[j-1]
        j -= 2
    elif nums[j] > 1:
        ans += nums[j]
        j -= 1
    else:
        break

if i <= j:
    ans += sum(nums[i:j+1])

print(ans)