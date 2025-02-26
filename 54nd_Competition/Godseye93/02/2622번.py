import sys

input = sys.stdin.readline

N = int(input())
count = 0

for a in range(1, N // 3 + 1):
    for b in range(a, (N - a) // 2 + 1):
        c = N - a - b
        if b <= c and a + b > c:
            count += 1

print(count)