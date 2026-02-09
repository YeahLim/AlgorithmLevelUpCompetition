import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = sorted(list(map(int, input().split())))

cnt = 1
limit = arr[0] + m-1

for i in arr:
    if i > limit:
        cnt += 1
        limit = i + m-1
print(cnt)