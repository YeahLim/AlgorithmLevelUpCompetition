import sys

input = sys.stdin.readline

n, k = map(int, input().split())
nums = list(map(int, input().split()))

start, end = 0, 0
max_length = 0
odd_count = 0

while end < n:
    if nums[end] % 2 == 1:
        odd_count += 1

    while odd_count > k:
        if nums[start] % 2 == 1:
            odd_count -= 1
        start += 1

    max_length = max(max_length, end - start + 1 - odd_count)
    end += 1

print(max_length)
