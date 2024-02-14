import sys
input = sys.stdin.readline

n = int(input())
l_arr = list(map(int, input().split()))
arr = list(map(int, input().split()))

total = 0
now = 0

for i in range(n-1):
	if arr[now] > arr[i]:
		now = i
	total += l_arr[i] * arr[now]
print(total)