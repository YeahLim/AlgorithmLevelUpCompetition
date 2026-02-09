import sys
input = sys.stdin.readline

W, H = map(int, input().split())
N = int(input())

horizontal = [0, H]
vertical = [0, W]

for _ in range(N):
    dir, pos = map(int, input().split())
    if dir == 0:
        horizontal.append(pos)
    else:
        vertical.append(pos)

horizontal.sort()
vertical.sort()

max_h = max(horizontal[i+1] - horizontal[i] for i in range(len(horizontal)-1))
max_w = max(vertical[i+1] - vertical[i] for i in range(len(vertical)-1))

print(max_h * max_w)
