import sys

input = sys.stdin.readline

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def is_palindrome(n):
    return str(n) == str(n)[::-1]

a, b = map(int, input().split())
b = min(b, 10000000)

for i in range(a, b + 1):
    if is_palindrome(i) and is_prime(i):
        print(i)
print(-1)
