from collections import deque

F, S, G, U, D = map(int, input().split())

v = [0] * (F+1)
q = deque([(S, 0)])

rlt = False
while q:
	p, c = q.popleft()
	if p == G:
		print(c)
		rlt = True
		break
	if p+U <= F and not v[p+U]:
		q.append((p+U, c+1))
		v[p+U] = 1
	if p-D > 0 and not v[p-D]:
		q.append((p-D, c+1))
		v[p-D] = 1



if not rlt:
	print('use the stairs')