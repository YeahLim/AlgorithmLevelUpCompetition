import sys

input = sys.stdin.readline

N = input().strip()
if '0' not in N:
    print(-1)
else:
    num_sum = sum(int(i) for i in N)
    if num_sum % 3 != 0:
        print(-1)
    else:
        sorted_num = sorted(N, reverse=True)
        print(''.join(sorted_num))