import sys
input = sys.stdin.readline

n, m = map(int, input().split())
a = [list(map(int, list(input().rstrip()))) for _ in range(n)]
b = [list(map(int, list(input().rstrip()))) for _ in range(n)]


def change(r, c):
	for i in range(r, r+3):
		for j in range(c, c+3):
			if not a[i][j]:
				a[i][j] = 1
			else:
				a[i][j] = 0

cnt = 0

for i in range(0, n-2):
	for j in range(0, m-2):
		if a[i][j] != b[i][j]:
			change(i, j)
			cnt += 1
if a == b:
	print(cnt)
else:
	print(-1)