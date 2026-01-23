import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [input().rstrip() for _ in range(n)]

cnt = 0
s = ''
for i in range(m):
	a, t, g, c = 0, 0, 0, 0
	for j in range(n):
		if arr[j][i] == 'T':
			t += 1
		elif arr[j][i] == 'G':
			g += 1
		elif arr[j][i] == 'A':
			a += 1
		elif arr[j][i] == 'C':
			c += 1
	
	mx = max(a, c, g, t)
	if mx == a:
		s += 'A'
		cnt += n - a
	elif mx == c:
		s += 'C'
		cnt += n - c
	elif mx == g:
		s += 'G'
		cnt += n - g
	elif mx == t:
		s += 'T'
		cnt += n - t
print(s)
print(cnt)