import sys
input = sys.stdin.readline

n = int(input())

x,y = 0,0
l = 0
r = n-1

lst = list(map(int,input().split()))

maxpoint = 2000000000

while l < r:
    center = lst[l] + lst[r]

    if abs(center) <= maxpoint:
        x = lst[l]
        y = lst[r]
        maxpoint = abs(center)

    if center <= 0:
        l += 1

    if center > 0:
        r -= 1


print(x,y)