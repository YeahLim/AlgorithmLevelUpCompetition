import sys
n,m = map(int,sys.stdin.readline().split(' '))

s = list()
o = list()

for _ in range(m):
    a,b = sys.stdin.readline().split(' ')
    s.append(int(a))
    o.append(int(b))

s = min(s)
o = min(o)

if s < o * 6:
    if s < (n % 6) * o:
        print((n // 6) * s + s)
    else:
        print((n // 6) * s + (n % 6) * o)

elif s >= o * 6:
    print(n * o)