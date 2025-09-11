import sys

input = sys.stdin.readline

n,m = map(int,input().split())

min_point = (m * (m + 1)) // 2

if n < min_point:
    print(-1)
else:
    remain = n - min_point

    if remain % m == 0:
        result = m - 1
    else:
        result = m

    print(result)