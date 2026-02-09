import math
import sys

input = sys.stdin.readline

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

T = int(input())
for _ in range(T):
    n = int(input())
    while True:
        if is_prime(n):
            print(n)
            break
        n += 1