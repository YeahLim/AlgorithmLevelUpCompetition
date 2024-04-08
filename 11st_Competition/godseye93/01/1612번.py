import sys

input = sys.stdin.readline

n = int(input())

if not (n % 2 and n % 5):
    print(-1)
else:
    j = 0
    for i in range(1, n+1):
        j = (10 * j + 1) % n
        if j % n == 0:
            print(i)
            break