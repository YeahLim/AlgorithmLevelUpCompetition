import sys

input = sys.stdin.readline

INF = 10 ** 9
dp = [0, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 2] + [INF] * 1_000_000

def get_hex(limit):
    hex_numbers = []
    n = 1
    while True:
        hex_n = n * (2 * n - 1)
        if hex_n > limit:
            break
        hex_numbers.append(hex_n)
        n += 1
    return hex_numbers

def solution():
    n = int(input().strip())
    if n < 13:
        print(dp[n])
        return

    hex_numbers = get_hex(n)
    for i in range(13, n + 1):
        for hex_n in hex_numbers:
            if hex_n > i:
                break
            dp[i] = min(dp[i], dp[i - hex_n] + 1)

    print(dp[n])

solution()
