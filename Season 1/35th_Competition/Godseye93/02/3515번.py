import sys

input = sys.stdin.readline

a, b = map(int,input().split())
n = int(input())

WishList = []
for _ in range(n):
    Wish = int(input())
    WishList.append(Wish)

cnt = []
cnt.append(abs(a-b))

for num in WishList:
    cnt.append(abs(num-b)+1)

print(min(cnt))