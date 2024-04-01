import sys

input = sys.stdin.readline

n = int(input())

data = [list(map(int,input().split())) for _ in range(n)]

result = 0

for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            x1, y1 = data[i]
            x2, y2 = data[j]
            x3, y3 = data[k]

            dist1 = (x1 - x2) ** 2 + (y1 - y2) ** 2
            dist2 = (x1 - x3) ** 2 + (y1 - y3) ** 2
            dist3 = (x2 - x3) ** 2 + (y2 - y3) ** 2

            if dist1 + dist2 == dist3 or dist2 + dist3 == dist1 or dist3 + dist1 == dist2:
                result += 1

print(result)