import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().rstrip().split()))
x = int(input())
arr.sort()
s, e = 0, n-1
cnt = 0

while e > s:
	rlt = arr[s] + arr[e]
	if rlt == x:
		cnt += 1
	
	if rlt >= x:
		e -= 1
	elif rlt < x:
		s += 1
print(cnt)