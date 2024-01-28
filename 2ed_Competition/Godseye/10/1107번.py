import sys
input = sys.stdin.readline

n = int(input())
m = int(input())
if m > 0:
    arr = list(map(int,input().split()))
else:
    print(len(str(n)))

min_cnt = abs(100-n)

for nums in range(1000001):
    nums = str(nums)

    for j in range(len(nums)):
        if int(nums[j]) in arr:
            break

        elif j == len(nums) -1:
            min_cnt=min(min_cnt, abs(int(nums)- n) + len(nums))


print(min_cnt)