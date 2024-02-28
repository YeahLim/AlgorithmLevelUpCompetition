import sys
input = sys.stdin.readline

n, m = map(int, input().split())
mp = 1e9
mo = 1e9

for _ in range(m):
    p, o = map(int, input().split())

    mp = min(p, mp)
    mo = min(o, mo)
rlt = 0
if mp // 6 >= mo:
    rlt = mo * n
else:
    if not n % 6:
        rlt = mp * (n//6)
    else:
        rlt = min(mp * (n//6+1), mp * (n//6) + mo*(n%6))
print(rlt)