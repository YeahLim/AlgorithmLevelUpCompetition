n, k = map(int, input().split())

cnt = 0

while bin(n).count('1') > k:
	cnt += 1
	n += 1
print(cnt)