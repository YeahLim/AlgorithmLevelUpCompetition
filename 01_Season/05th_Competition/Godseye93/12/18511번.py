import sys
from itertools import product

input = sys.stdin.readline

n, k_num = map(int, input().split())
k = input().split()
len_max = len(str(n))

while True:
    combinations = list(product(k, repeat=len_max))
    valid_combinations = [int("".join(comb)) for comb in combinations if int("".join(comb)) <= n]
    if valid_combinations:
        print(max(valid_combinations))
        break
    else:
        len_max -= 1

