import sys
input = sys.stdin.readline

n, d, k, c = map(int, input().split())

cnts = [0] * (d+1)
cnt = 0
arr = [int(input()) for _ in range(n)]

for i in range(k):
	idx = arr[i]
	cnts[idx] += 1

for i in cnts:
	if i:
		cnt += 1
mx = 0
if not cnts[c]:
	mx = cnt + 1
else:
	mx = cnt

s, e = 0, k - 1

while s < n - 1:
	cnts[arr[s]] -= 1
	if not cnts[arr[s]]:
		cnt -= 1
	s += 1
	e += 1
	if not cnts[arr[e % n]]:
		cnt += 1
	cnts[arr[e % n]] += 1
	if not cnts[c] and mx < cnt + 1:
		mx = cnt + 1
	if cnt > mx:
		mx = cnt

print(mx)