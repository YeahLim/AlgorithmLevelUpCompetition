import sys

input = sys.stdin.readline

N = int(input())
cards = [list(map(int, input().split())) for _ in range(N)]

max_digit = -1
winner = 0

for i in range(N):
    for j in range(5):
        for k in range(j + 1, 5):
            for l in range(k + 1, 5):
                total = cards[i][j] + cards[i][k] + cards[i][l]
                digit = total % 10
                if digit >= max_digit:
                    max_digit = digit
                    winner = i + 1

print(winner)