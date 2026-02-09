import sys

input = sys.stdin.readline

n = int(input())
data = []
lst = ''
for _ in range(n):
    ans = False
    a,b,c = map(str,input().split())
    if a == 'type':
        lst += b
        data.append((int(c), lst))
    else:
        b,c = int(b), int(c)
        for i in range(len(data) - 1, -1, -1):
            if data[i][0] >= c - b:
                continue
            ans = True
            lst = data[i][1]
            data.append((c, lst))
            break
        if not ans:
            lst = ''
            data.append((c, lst))
print(data[-1][1])