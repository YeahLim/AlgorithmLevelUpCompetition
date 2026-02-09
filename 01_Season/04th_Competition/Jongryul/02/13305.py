import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
l_arr = list(map(int, input().split()))
arr = list(map(int, input().split()))
stop = deque([])

now = 0
for i in range(n-1):
	if arr[i] < arr[now]:
		stop.append(i)
		now = i

total = 0
now2 = 0
while stop:
	total += sum(l_arr[now2:stop[0]]) * arr[now2]
	now2 = stop.popleft()
total += sum(l_arr[now2:]) * arr[now2]
print(total)