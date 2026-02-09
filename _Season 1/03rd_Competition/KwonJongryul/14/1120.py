a, b = input().split()
mn = 1e9
idx = 0

for i in range(len(b) - len(a) + 1):
	cnt = 0
	for j in range(len(a)):
		if b[i+j] != a[j]:
			cnt += 1
	if mn > cnt:
		mn = cnt
print(mn)