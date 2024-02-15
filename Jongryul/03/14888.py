import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
cal = list(map(int, input().split()))

r_min = 1e9
r_max = -1e9

def c(cnt, pl, mi, mul, div, idx):
	global r_min, r_max

	if idx >= n:
		if cnt < r_min:
			r_min = cnt
		if cnt > r_max:
			r_max = cnt
		return
	
	for _ in range(pl):
		c(cnt + arr[idx], pl-1, mi, mul, div, idx+1)
	for _ in range(mi):
		c(cnt - arr[idx], pl, mi-1, mul, div, idx+1)
	for _ in range(mul):
		c(cnt * arr[idx], pl, mi, mul-1, div, idx+1)
	for _ in range(div):
		if cnt < 0:
			c(((cnt * -1) // arr[idx])*-1, pl, mi, mul, div-1, idx+1)
		else:
			c(cnt // arr[idx], pl, mi, mul, div-1, idx+1)

c(arr[0], cal[0], cal[1], cal[2], cal[3], 1)

print(r_max)
print(r_min)