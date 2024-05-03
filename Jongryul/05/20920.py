import sys
input = sys.stdin.readline

n, m = map(int, input().split())
dic = {}
for _ in range(n):
	s = input().rstrip()
	if dic.get(s):
		dic[s] += 1
	else:
		dic[s] = 1
arr = [key for key in dic if len(key) >= m]

arr.sort()
arr.sort(key=lambda x : len(x), reverse=True)
arr.sort(key=lambda x : dic[x], reverse=True)

for i in arr:
	print(i)