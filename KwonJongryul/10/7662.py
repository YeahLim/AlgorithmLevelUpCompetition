import sys
from heapq import heappop, heappush
input = sys.stdin.readline
t = int(input())
for _ in range(t):
	k = int(input())
	arr1 = []
	arr2 = []
	v = [0] * k
	
	for i in range(k):
		w, n = input().rstrip().split()
		n = int(n)
		if w == 'I':
			heappush(arr1, (n * -1, i))
			heappush(arr2, (n, i))
			v[i] = 1
		else:
			if n == -1:
				while arr2 and not v[arr2[0][1]]:
					heappop(arr2)
				if arr2:
					v[arr2[0][1]] = 0
					heappop(arr2)
			else:
				while arr1 and not v[arr1[0][1]]:
					heappop(arr1)
				if arr1:
					v[arr1[0][1]] = 0
					heappop(arr1)

	while arr2 and not v[arr2[0][1]]:
		heappop(arr2)
	while arr1 and not v[arr1[0][1]]:
		heappop(arr1)
	if arr1 and arr2:
		print(arr1[0][0] * -1, arr2[0][0])
	else:
		print('EMPTY')