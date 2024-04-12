import sys

input = sys.stdin.readline

n = int(input())
data = list(map(int, input().split()))
cnt = 0

while len(data) > 0:
    a = set(sorted(data))
    for i in a:
        data.remove(i)
    cnt += 1
print(cnt)
