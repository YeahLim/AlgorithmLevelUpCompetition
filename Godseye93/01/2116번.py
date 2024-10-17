import sys

input = sys.stdin.readline

n = int(input())
dices = [list(map(int, input().split())) for _ in range(n)]
max_sum = 0


def get_max(dice, bottom):
    idx = dice.index(bottom)
    if idx == 0:
        return (dice[5], max(dice[1:5]))
    elif idx == 1:
        return (dice[3], max(dice[0], dice[2], dice[4], dice[5]))
    elif idx == 2:
        return (dice[4], max(dice[0], dice[1], dice[3], dice[5]))
    elif idx == 3:
        return (dice[1], max(dice[0], dice[2], dice[4], dice[5]))
    elif idx == 4:
        return (dice[2], max(dice[0], dice[1], dice[3], dice[5]))
    elif idx == 5:
        return (dice[0], max(dice[1:5]))


for b in range(1, 7):
    bottom = b
    total = 0

    for dice in dices:
        bottom, max_side = get_max(dice, bottom)
        total += max_side

    max_sum = max(max_sum, total)

print(max_sum)