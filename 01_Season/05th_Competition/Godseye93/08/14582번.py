import sys
input = sys.stdin.readline

j = list(map(int,input().split()))
s = list(map(int,input().split()))
j_check = 0
s_check = 0
p_sum = 0

for i in range(9):
    p_sum += j[i]
    if p_sum > 0:
        j_check = 1
    p_sum -= s[i]
    if p_sum < 0:
        s_check = 1

if j_check == 0 or s_check == 0:
    print('No')
else:
    print('Yes')