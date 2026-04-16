import sys

input = sys.stdin.readline

dx = [-2, -1, 1, 2, 2, 1, -1, -2]
dy = [-1, -2, -2, -1, 1, 2, 2, 1]

board = [[False] * 6 for _ in range(6)]

moves = []
for _ in range(36):
    pos = input().strip()
    x = ord(pos[0]) - ord('A')
    y = int(pos[1]) - 1
    moves.append((x, y))

sx, sy = moves[0]
board[sy][sx] = True

valid = True

for i in range(1, 36):
    prev_x, prev_y = moves[i - 1]
    curr_x, curr_y = moves[i]

    is_knight_move = False
    for d in range(8):
        if prev_x + dx[d] == curr_x and prev_y + dy[d] == curr_y:
            is_knight_move = True
            break

    if not is_knight_move:
        valid = False
        break

    if board[curr_y][curr_x]:
        valid = False
        break

    board[curr_y][curr_x] = True

last_x, last_y = moves[-1]
if not ((abs(last_x - sx) == 1 and abs(last_y - sy) == 2) or
        (abs(last_x - sx) == 2 and abs(last_y - sy) == 1)):
    valid = False

print("Valid" if valid else "Invalid")