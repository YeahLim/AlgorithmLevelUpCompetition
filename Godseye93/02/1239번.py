import sys
import itertools

input = sys.stdin.readline

def count_50_subsums(permutation):
    partial_sums = []
    current_sum = 0
    count = 0
    for num in permutation:
        current_sum += num
        partial_sums.append(current_sum)
    for i in range(len(partial_sums)-1):
        for j in range(i+1, len(partial_sums)):
            if partial_sums[i] + 50 == partial_sums[j]:
                count += 1
    return count

n = int(input())
nums = list(map(int, input().split()))
nums.sort()

if nums[-1] > 50:
    print(0)
else:
    max_count = 0
    for perm in itertools.permutations(nums):
        current_count = count_50_subsums(perm)
        if current_count > max_count:
            max_count = current_count
    print(max_count)
