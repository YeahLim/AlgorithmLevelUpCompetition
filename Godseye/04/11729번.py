import sys

input = sys.stdin.readline

n = int(input())
move = []


def ans(n, start, via, to):
    if n == 1:
        move.append([start, to])
    else:
        ans(n - 1, start, to, via)
        move.append([start, to])
        ans(n - 1, via, start, to)


ans(n, 1, 2, 3)
print(len(move))
for i in move:
    print(*i)
