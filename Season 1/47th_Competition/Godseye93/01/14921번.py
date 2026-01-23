import sys

input = sys.stdin.readline

n = int(input())
lst = list(map(int, input().split()))

l, r = 0, n - 1
ans = lst[l] + lst[r]

while l < r:
    check = lst[l] + lst[r]
    if abs(ans) > abs(check):
        ans = check

    if check < 0:
        l += 1
    else:
        r -= 1

print(ans)
