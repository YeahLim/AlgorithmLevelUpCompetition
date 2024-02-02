import sys
input = sys.stdin.readline
n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

for i in range(n):
	for j in range(n):
		r, c = i-1, j-1
		if r >= 0:
			arr[i][j] += arr[r][j]
		if c >= 0:
			arr[i][j] += arr[i][c]
		if r >= 0 and c >= 0:
			arr[i][j] -= arr[r][c]

for _ in range(m):
	x1, y1, x2, y2 = [x - 1 for x in map(int, input().split())]
	rlt = arr[x2][y2]
	if x1-1 >= 0:
		rlt -= arr[x1-1][y2]
	if y1-1 >= 0:
		rlt -= arr[x2][y1-1]
	if x1-1 >= 0 and y1-1 >= 0:
		rlt += arr[x1-1][y1-1]

	print(rlt)