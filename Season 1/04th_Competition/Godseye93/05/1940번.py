import sys

input = sys.stdin.readline

n = int(input())
m = int(input())
data = list(map(int, input().split()))

data.sort()
start = 0
end = n - 1
cnt = 0

while start < end:
    temp = data[start] + data[end]
    if temp == m:
        cnt += 1
        start += 1
        end -= 1
    elif temp > m:
        end -= 1
    elif temp < m:
        start += 1

print(cnt)
