import sys
input = sys.stdin.readline

n = int(input())
st = set()
cnt = 0
for _ in range(n):
	s = input().rstrip()
	if s == 'ENTER':
		st = set()
	elif s not in st:
		st.add(s)
		cnt += 1
print(cnt)