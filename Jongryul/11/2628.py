import sys
input = sys.stdin.readline

n,m = map(int, input().split())
k = int(input())

w = [0, n]
h = [0, m]
for _ in range(k):
	wh, l = map(int,input().split())
	if wh:
		w.append(l)
	else:
		h.append(l)
w.sort()
h.sort()

rlt = 0
for i in range(len(w)-1):
	for j in range(len(h)-1):
		wl = w[i+1] - w[i]
		hl = h[j+1] - h[j]
		rlt = max(hl*wl, rlt)
print(rlt)