import sys

input = sys.stdin.readline

n = int(input())
stack = []

for _ in range(n):
    order = list(map(int, input().split()))
    if order[0] == 1:
        stack.append(order[1])
    elif order[0] == 2:
        if stack:
            print(stack.pop(-1))
        else:
            print(-1)
    elif order[0] == 3:
        print(len(stack))
    elif order[0] == 4:
        if stack:
            print(0)
        else:
            print(1)
    elif order[0] == 5:
        if stack:
            print(stack[-1])
        else:
            print(-1)
