import sys

input = sys.stdin.readline

n = int(input())
room = [list(input()) for _ in range(n)]

row_count = 0
col_count = 0

for i in range(n):
    row_seat = 0
    col_seat = 0
    for j in range(n):
        if room[i][j] == '.':
            row_seat += 1
            if j == n - 1 or room[i][j + 1] == 'X':
                if row_seat >= 2:
                    row_count += 1
                row_seat = 0
        if room[j][i] == '.':
            col_seat += 1
            if j == n - 1 or room[j + 1][i] == 'X':
                if col_seat >= 2:
                    col_count += 1
                col_seat = 0

print(row_count, col_count)
