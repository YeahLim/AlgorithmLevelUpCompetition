import sys
input = sys.stdin.readline

k = int(input())

n = 2**k -1
tree = [[] for _ in range(k)]
arr = list(map(int, input().split()))


def bi(s, e, idx):
	if idx > k or s > e:
		return
	mid = int((s+e) / 2)

	tree[idx].append(arr[mid])
	bi(s, mid-1, idx+1)
	bi(mid+1, e, idx+1)

bi(0, n-1, 0)
for t in tree:
	print(*t)