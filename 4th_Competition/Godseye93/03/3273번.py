import sys

input = sys.stdin.readline

n = int(input())
data = list(map(int, input().split()))
x = int(input())

data.sort()

cnt = 0
start = 0
end = n - 1

while start < end:
    temp = data[start] + data[end]
    if temp == x:
        cnt += 1
        start += 1
        end -= 1
    elif temp > x:
        end -= 1
    elif temp < x:
        start += 1

print(cnt)
