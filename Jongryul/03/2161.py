from collections import deque
n = int(input())
arr = deque([i for i in range(1, n+1)])
rlt = []

while arr:
    rlt.append(arr.popleft())
    arr.rotate(-1)
print(*rlt)