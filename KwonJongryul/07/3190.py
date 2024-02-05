import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
k = int(input())

apples = []

d = [(0, 1), (1, 0), (0, -1), (-1, 0)]

for _ in range(k):
	a, b = map(int, input().split())
	apples.append((a-1, b-1))

l = int(input())

move = [tuple(input().rstrip().split()) for _ in range(l)]

arr = [[0] * n for _ in range(n)]



for i, j in apples:
	arr[i][j] = 2
arr[0][0] = 1
def f():
	snake = deque([(0, 0)])
	dir = 0
	sec = 0
	idx = 0
	while True:
		s, rotate = int(move[idx][0]), move[idx][1]
		nr, nc = snake[-1]
		tr, tc = snake[0]
		r, c = nr + d[dir%4][0], nc + d[dir%4][1]

		if r < 0 or r >= n or c < 0 or c >= n or arr[r][c] == 1:
			return sec+1
		if not arr[r][c]:
			snake.append((r, c))
			snake.popleft()
			arr[tr][tc] = 0
			arr[r][c] = 1
		elif arr[r][c] == 2:
			arr[r][c] = 1
			snake.append((r, c))
		sec += 1
		if s == sec:
			if idx < l-1:
				idx += 1
			if rotate == 'L':
				dir -= 1
			else:
				dir += 1
print(f())