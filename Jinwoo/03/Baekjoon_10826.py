import sys
input = sys.stdin.readline

N = int(input())
l = [0,1]

for i in range(2, N+1):
    l.append(l[i-1] + l[i-2])

print(l[N])