n = sorted(input(), reverse=True)

if '0' not in n:
	print(-1)
elif sum(map(int, n)) % 3:
	print(-1)
else:
	print(''.join(n))