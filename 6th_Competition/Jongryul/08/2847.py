import sys
input = sys.stdin.readline

n = int(input())
arr = [int(input()) for _ in range(n)]
cnt = 0

for i in range(n-1, 0, -1):
	if arr[i] <= arr[i-1]:
		tmp = arr[i-1] - arr[i] + 1
		arr[i-1] -= tmp
		cnt += tmp
print(cnt)