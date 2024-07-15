import sys

input = sys.stdin.readline

m, n = map(int, sys.stdin.readline().split())

is_prime = [True] * (int(n ** 0.5) + 1)
is_prime[1] = False

for i in range(2, int(n ** 0.5) + 1):
    if is_prime[i]:
        if i * i > int(n ** 0.5):
            break
        for j in range(i**2, int(n ** 0.5) + 1, i):
            is_prime[j] = False

count = 0
for i in range(1, len(is_prime)):
    if is_prime[i]:
        res = i * i
        while True:
            if res < m:
                res *= i
                continue
            if res > n:
                break
            res *= i
            count += 1

print(count)
