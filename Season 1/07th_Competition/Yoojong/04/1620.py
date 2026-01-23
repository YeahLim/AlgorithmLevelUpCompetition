import sys
n, m = map(int, sys.stdin.readline().split())
p_i = dict()
p_k = dict()
check = list()
for _ in range(n+m):
    name = sys.stdin.readline().rstrip()
    if _ < n:
        p_i[_] = name
        p_k[name] = _
    else:
        check.append(name)
for i in check:
    try:
        #int
        i = int(i)
        print(p_i[i-1])
    except ValueError:
        #str
        print(p_k[i] + 1)