import sys

input = sys.stdin.readline

board = input().strip()
board = board.split('.')

answer = []

for part in board:
    length = len(part)
    if length % 2 != 0:
        print(-1)
        exit()
    answer.append('AAAA' * (length // 4) + 'BB' * ((length % 4) // 2))

print('.'.join(answer))
