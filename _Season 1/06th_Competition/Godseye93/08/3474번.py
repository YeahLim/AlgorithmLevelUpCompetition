import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())
    count = 0
    i = 5
    while (N // i >= 1):
        count += N // i
        i *= 5
    print(count)
