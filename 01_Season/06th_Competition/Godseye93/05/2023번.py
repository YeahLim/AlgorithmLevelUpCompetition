import sys

input = sys.stdin.readline


def is_prime(num):
    if num == 0 or num == 1:
        return False
    else:
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True


def make_prime(num, N):
    if len(str(num)) == N:
        print(num)
    else:
        for i in range(10):
            temp = num * 10 + i
            if is_prime(temp):
                make_prime(temp, N)


N = int(input())
for i in range(1, 10):
    if is_prime(i):
        make_prime(i, N)
