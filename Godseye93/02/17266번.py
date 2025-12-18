import sys
input = sys.stdin.readline

n = int(input())
m = int(input())
pos = list(map(int, input().split()))

left = 0
right = n

def check(height):
    prev = 0
    for p in pos:
        if p - height > prev:
            return False
        prev = p + height
    return prev >= n

while left < right:
    mid = (left + right) // 2
    if check(mid):
        right = mid
    else:
        left = mid + 1

print(left)