import sys
input = sys.stdin.readline

n, x = map(int, input().split())
arr = list(map(int, input().split()))

mx = sum(arr[0:x])
s = mx
cnt = 1
for i in range(x, n):
	s = s - arr[i-x] + arr[i]
	if mx < s:
		mx = s
		cnt = 1
	elif mx == s:
		cnt += 1
if mx:
	print(mx)
	print(cnt)
else:
	print('SAD')
