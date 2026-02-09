import sys

input = sys.stdin.readline

n = int(input())
for _ in range(n):
    a, b = map(int,input().split())

    v = []
    check = {}
    v.append(str(a // b))
    a = (a % b) * 10

    while True:
        idx = check.get(a // 10)
        if idx is not None:
            print(v[0] + '.', end='')
            print(''.join(v[1:idx]), end='')
            print('(' + ''.join(v[idx:]) + ')')
            break
        check[a // 10] = len(v)
        v.append(str(a // b))
        a = (a % b) * 10