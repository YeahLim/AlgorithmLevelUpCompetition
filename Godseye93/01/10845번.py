import sys

input = sys.stdin.readline

n = int(input())
data = []
for i in range(n):
    order = list(input().split())
    if order[0] == 'push':
        data.append(order[1])
    elif order[0] == 'pop':
        if len(data) == 0:
            print(-1)
        else:
            ans = data.pop(0)
            print(ans)
    elif order[0] == 'size':
        print(len(data))
    elif order[0] == 'empty':
        if len(data) == 0:
            print(1)
        else:
            print(0)
    elif order[0] == 'front':
        if len(data) == 0:
            print(-1)
        else:
            print(data[0])
    elif order[0] == 'back':
        if len(data) == 0:
            print(-1)
        else:
            print(data[-1])