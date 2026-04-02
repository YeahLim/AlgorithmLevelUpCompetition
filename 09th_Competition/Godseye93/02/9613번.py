from math import gcd
import sys

input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1

for _ in range(t):
    n = int(data[index])
    index += 1
    nums = []
    for i in range(n):
        nums.append(int(data[index]))
        index += 1

    total = 0
    for i in range(n):
        for j in range(i + 1, n):
            total += gcd(nums[i], nums[j])

    print(total)