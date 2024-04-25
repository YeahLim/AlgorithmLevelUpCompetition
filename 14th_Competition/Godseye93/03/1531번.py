import sys

input = sys.stdin.readline

n,m = map(int, input().split())
data = [[0]*100 for x in range(100)]

for i in range(n):
    a1, b1, a2, b2 = map(int,input().split())
    for j in range(a1, a2+1):
        for k in range(b1, b2+1):
            data[j-1][k-1] += 1

cnt = 0
for i in range(100):
    for j in range(100):
        if data[i][j] > m:
            cnt += 1

print(cnt)