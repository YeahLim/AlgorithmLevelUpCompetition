from itertools import combinations

n = int(input())
arr = [str(i) for i in range(10)]
rlt = []
for i in range(1, 11):
	for num in combinations(arr, i):
		rlt.append(int(''.join(sorted(num, reverse=True))))
rlt.sort()
if n > len(rlt):
	print(-1)
else:
	print(rlt[n-1])