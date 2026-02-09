import sys
input = sys.stdin.readline

n, m, k = map(int, input().split())
count = 0

for _ in range(n):
    row = input().strip()
    zero_cnt = 0
    for i in range(m):
        if row[i] == '0':
            zero_cnt += 1
        else:
            if zero_cnt >= k:
                count += zero_cnt - k + 1
            zero_cnt = 0
    if zero_cnt >= k:
        count += zero_cnt - k + 1

print(count)
