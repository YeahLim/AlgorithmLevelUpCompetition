import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
	word = input().rstrip()
	left = []
	right = []
	for i in word:
		if i == '<':
			if left:
				right.append(left.pop())
		elif i == '>':
			if right:
				left.append(right.pop())
		elif i == '-':
			if left:
				left.pop()
		else:
			left.append(i)
	print(f'{"".join(left)}{"".join(reversed(right))}')