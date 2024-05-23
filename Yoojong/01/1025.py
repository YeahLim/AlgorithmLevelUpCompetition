import sys

n, m = map(int, sys.stdin.readline().split())
graph = [list(sys.stdin.readline()) for _ in range(n)]

answer = -1

def sqr(s):
    s = int(s)
    return int(s**0.5) ** 2 ==s

for i in range(n):
    for j in range(m):
        for row_d in range(-n,n):
            for col_d in range(-m,m):
                s = ""
                x , y = i , j
                if row_d == 0 and col_d == 0:
                    continue
                while 0 <= x < n and 0 <=y <m:
                    s += graph[x][y]
                    if sqr(s):
                        answer = max(answer, int(s))
                    x += row_d
                    y += col_d
print(answer)
