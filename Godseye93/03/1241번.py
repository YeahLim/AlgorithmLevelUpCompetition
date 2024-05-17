import sys

input = sys.stdin.readline

n = int(input())

nums = [int(input()) for _ in range(n)]
count = {}
result = [0] * n

for num in nums:
    if num in count:
        count[num] += 1
    else:
        count[num] = 1

for i, num in enumerate(nums):
    for j in range(1, int(num**0.5) + 1):
        if num % j == 0:
            if j in count:
                result[i] += count[j]
            if num // j != j and num // j in count:
                result[i] += count[num // j]
    result[i] -= 1

for res in result:
    print(res)
