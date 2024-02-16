import sys

input = sys.stdin.readline

n, s = map(int,input().split())
data = list(map(int,input().split()))


end = 0
num_sum = 0
min_value = 100002

for start in range(n):
    while num_sum <s and end < n:
        num_sum += data[end]
        end += 1

    if num_sum >= s:
        min_value = min(min_value, end-start)

    num_sum -= data[start]

if min_value == 100002:
    print(0)
else:
    print(min_value)