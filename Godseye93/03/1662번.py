import sys

input = sys.stdin.readline

S = input().strip()
len_stack = [0] * 51
K = [0] * 51
cur = 0

for char in S:
    if char == '(':
        len_stack[cur] -= 1
        cur += 1
        K[cur] = num
    elif char == ')':
        temp = len_stack[cur] * K[cur]
        len_stack[cur] = 0
        cur -= 1
        len_stack[cur] += temp
    else:
        len_stack[cur] += 1
        num = int(char)

print(len_stack[0])
