import sys

input = sys.stdin.readline


E, S, M = map(int, input().split())
year = 1

while True:
    is_matching = True

    if (year - E) % 15 != 0:
        is_matching = False

    if (year - S) % 28 != 0:
        is_matching = False

    if (year - M) % 19 != 0:
        is_matching = False

    if is_matching:
        break

    year += 1

print(year)