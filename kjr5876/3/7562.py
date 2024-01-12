import sys
from collections import deque

input = sys.stdin.readline

t = int(input())
for _ in range(t):
	l = int(input())
	v = [[0] * l for _ in range(l)]
	now = list(map(int, input().rstrip().split()))
	v[now[0]][now[1]] = 1
	now.append(0)
	target = tuple(map(int, input().rstrip().split()))
	q = deque([tuple(now)])
	while q:
		qr, qc, cnt = q.popleft()
		if (qr, qc) == target:
			print(cnt)
			break
		for dr, dc in [(-1, -2), (-2, -1), (-2, 1), (-1, 2), (1, -2), (2, -1), (2, 1), (1, 2)]:
			r, c = qr + dr, qc + dc
			if 0 <= r < l and 0 <= c < l and not v[r][c]:
				q.append((r, c, cnt+1))
				v[r][c] = 1