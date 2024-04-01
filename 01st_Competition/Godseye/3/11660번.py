import sys
input = sys.stdin.readline

n,m = map(int,input().split())
n_list = [list(map(int,input().split())) for _ in range(n)]

sum_list = [[0]*(n+1) for _ in range(n+1)]
for i in range(1, n+1):
    for j in range(1,n+1):
        sum_list[i][j] = sum_list[i-1][j]+sum_list[i][j-1]-sum_list[i-1][j-1]+n_list[i-1][j-1]

for i in range(m):
    x1, y1, x2, y2 = map(int,input().split())
    ans = sum_list[x2][y2] + sum_list[x1-1][y1-1]-sum_list[x1-1][y2]-sum_list[x2][y1-1]
    print(ans)
