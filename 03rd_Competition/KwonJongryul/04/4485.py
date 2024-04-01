import sys
from heapq import heappush, heappop
input = sys.stdin.readline

tc = 1
while True:
	n = int(input())
	if not n:
		break
	arr = [list(map(int, input().split())) for _ in range(n)]
	v = [[0] * n for _ in range(n)]
	q = []
	heappush(q, (arr[0][0], 0, 0))
	while True:
		cnt, qr, qc = heappop(q)
		if (qr, qc) == (n-1, n-1):
			print(f'Problem {tc}: {cnt}')
			break
		for dr, dc in [(0, 1), (1, 0), (-1, 0), (0, -1)]:
			r, c = qr + dr, qc + dc
			if 0 <= r < n and 0 <= c < n and not v[r][c]:
				heappush(q, (cnt + arr[r][c], r, c))
				v[r][c] = 1
	tc += 1