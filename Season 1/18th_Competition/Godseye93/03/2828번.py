import sys

input = sys.stdin.readline

n, m = map(int, input().split())
j = int((input()))

pos = 1
move = 0

apples = [int(sys.stdin.readline()) for _ in range(j)]

for a in apples:
    if pos <= a <= pos + m - 1:
        continue
    elif pos > a:
        move += pos - a
        pos = a
    else:
        move += a - (pos + m - 1)
        pos = a - (m - 1)

print(move)
