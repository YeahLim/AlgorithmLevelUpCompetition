import sys
input = sys.stdin.readline

def sol(l, r, k):
    if k & 1:
        t = (k + 1) // 2
        L = (l + k - 1) // k
        R = r // k
        if t > R:
            return 0
        return R - max(L, t) + 1
    else:
        t = k + 1
        L = (l + k // 2 - 1) // (k // 2)
        R = r // (k // 2)
        b = (k == 4) * (L <= 6 and 6 <= R)
        if t > R:
            return 0
        return R - max(L, t) + 1 - b


l = int(input())
r = int(input())
k = int(input())

print(sol(l, r, k))
