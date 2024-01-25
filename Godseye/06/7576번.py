from collections import deque
import sys

input = sys.stdin.readline

width, height = map(int, input().split())

tomatos = []

dq = deque()

unripe_tomatos = 0
for i in range(height):

    numbers = []
    for j, number in enumerate(input().split()):
        number = int(number)
        numbers.append(number)

        if number == 1:
            dq.append((i, j, 0))

        if number == 0:
            unripe_tomatos += 1

    tomatos.append(numbers)

_dr = [0, 1, 0, -1]
_dc = [1, 0, -1, 0]

visited = {}
riped_tomatos = 0

min_days = 0

while dq:
    r, c, days = dq.popleft()

    for dr, dc in zip(_dr, _dc):
        nr = r + dr
        nc = c + dc

        if nr < 0 or nc < 0 or nr >= height or nc >= width:
            continue

        if tomatos[nr][nc] == 0 and (nr, nc) not in visited:
            riped_tomatos += 1

            visited[(nr, nc)] = 1

            dq.append((nr, nc, days + 1))

    min_days = days

if unripe_tomatos == riped_tomatos:
    print(min_days)

else:
    print(-1)
