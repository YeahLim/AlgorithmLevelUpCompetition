import sys
sys.setrecursionlimit = 1000000000
input = sys.stdin.readline

n, m = map(int, input().split())

cal = [list(map(int, input().split())) for _ in range(m)]

parent = [i for i in range(n+1)]

def find(x):
    if parent[x] == x: 
        return x

    else:
        parent[x] = find(parent[x])
        return parent[x]
    
def union(x, y):
    nx = find(x)
    ny = find(y)

    if nx != ny:
        parent[ny] = nx

for c in cal:
    s, a, b = c
    
    if s == 0:
        union(a, b)
    else:
        rlt = find(a) == find(b)

        if rlt:
            print('YES')
        else:
            print('NO')