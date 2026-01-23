import sys

input = sys.stdin.readline

def check_winner(board, player):
    for i in range(3):
        if board[i * 3] == board[i * 3 + 1] == board[i * 3 + 2] == player:
            return True
    for i in range(3):
        if board[i] == board[i + 3] == board[i + 6] == player:
            return True
    if board[0] == board[4] == board[8] == player:
        return True
    if board[2] == board[4] == board[6] == player:
        return True
    return False

def is_valid(board):
    x_count = board.count('X')
    o_count = board.count('O')

    if x_count < o_count or x_count > o_count + 1:
        return False

    x_wins = check_winner(board, 'X')
    o_wins = check_winner(board, 'O')

    if x_wins and o_wins:
        return False

    if x_wins:
        return x_count == o_count + 1

    if o_wins:
        return x_count == o_count

    return x_count + o_count == 9

while True:
    board = input().strip()
    if board == "end":
        break
    if len(board) != 9 or not all(c in 'XO.' for c in board):
        print("invalid")
        continue
    print("valid" if is_valid(board) else "invalid")