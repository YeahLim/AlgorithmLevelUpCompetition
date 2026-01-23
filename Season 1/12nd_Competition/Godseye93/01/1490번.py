import sys
from math import gcd

# input = sys.stdin.readline

n = input()
digits = [int(digit) for digit in n if digit != '0']

def lcm(a, b):
    return a * b // gcd(a, b)

lcm_val = digits[0]
for i in range(1, len(digits)):
    lcm_val = lcm(lcm_val, digits[i])

num = int(n)
check_size = 1
while True:
    temp = num * check_size
    for i in range(check_size):
        if temp % lcm_val == 0:
            print(temp)
            exit()
        temp += 1
    check_size *= 10