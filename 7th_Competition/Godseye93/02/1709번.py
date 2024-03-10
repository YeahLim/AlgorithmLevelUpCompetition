import sys

input = sys.stdin.readline

def ans(x, y, R):
    return (x * x + y * y < R * R) and ((x + 1) * (x + 1) + (y + 1) * (y + 1) > R * R)

N = int(input())
R = N // 2
cnt = 0
x, y = 0, R - 1
move = [(1, 0), (0, -1), (1, -1)]

while x != y:
    cnt += 1
    for i in range(3):
        nx = x + move[i][0]
        ny = y + move[i][1]
        if ans(nx, ny, R):
            x, y = nx, ny
            break

print(4 + cnt * 8)