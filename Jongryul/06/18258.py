import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
q = deque([])

for _ in range(n):
	order = input().rstrip().split()
	if len(order) > 1:
		q.append(int(order[1]))
	elif order[0] == 'front':
		if q:
			print(q[0])
		else:
			print(-1)
	elif order[0] == 'back':
		if q:
			print(q[-1])
		else:
			print(-1)
	elif order[0] == 'empty':
		if q:
			print(0)
		else:
			print(1)
	elif order[0] == 'size':
		print(len(q))
	else:
		if q:
			print(q.popleft())
		else:
			print(-1)

