import sys

input = sys.stdin.readline


N = int(input())
numbers = [input().strip() for _ in range(N)]

for k in range(1, len(numbers[0]) + 1):
    suffixes = {num[-k:] for num in numbers}
    if len(suffixes) == N:
        print(k)
        break