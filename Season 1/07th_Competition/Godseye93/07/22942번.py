import sys

input = sys.stdin.readline

n = int(input())

circles = []

for i in range(n):
    center, radius = map(int, input().split())
    circles.append((center - radius, i))
    circles.append((center + radius, i))

circles.sort()

stack = []
for circle in circles:
    if stack and stack[-1][1] == circle[1]:
        stack.pop()
    else:
        stack.append(circle)

if not stack:
    print('YES')
else:
    print('NO')