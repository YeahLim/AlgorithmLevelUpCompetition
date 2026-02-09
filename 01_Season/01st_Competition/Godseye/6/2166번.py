import sys

input = sys.stdin.readline

n = int(input())

x_lst = []
y_lst = []

for _ in range(n):
    x,y = map(int, input().split())
    x_lst.append(x)
    y_lst.append(y)

x_lst.append(x_lst[0])
y_lst.append(y_lst[0])

l = 0
r = 0

for i in range(n):
    l += x_lst[i] * y_lst[i+1]
    r += x_lst[i+1] * y_lst[i]

ans = abs(l-r)/2
print(ans)