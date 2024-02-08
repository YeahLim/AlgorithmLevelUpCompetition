import sys
input = sys.stdin.readline

n, r, c = map(int,input().split())

def z(n, r, c):
    if n == 0:
        return 0
    else:
        return 2*(r%2) + (c%2) + 4 * z(n-1, r//2, c//2)

ans = z(n,r,c)
print(ans)