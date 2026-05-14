def solution(s):
    nums = [int(x) for x in s.split()]
    min_val = min(nums)
    max_val = max(nums)
    return str(min_val) + " " + str(max_val)