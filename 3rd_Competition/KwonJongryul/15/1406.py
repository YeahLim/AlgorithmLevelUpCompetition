import sys
input = sys.stdin.readline
word = input().rstrip()

n = int(input())
left = list(word)
right = []
for _ in range(n):
	com = input().rstrip().split()
	if len(com) > 1:
		c, w = com
	else:
		c = com[0]
	if left:
		if c == 'L':
			right.append(left.pop())
		elif c == 'B':
			left.pop()
	if c == 'D' and right:
		left.append(right.pop())
	if c == 'P':
		left.append(w)
print(f'{"".join(left)}{"".join(right[::-1])}')