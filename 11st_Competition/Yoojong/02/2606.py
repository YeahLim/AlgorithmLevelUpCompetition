import sys
num = int(sys.stdin.readline())
connections_num = int(sys.stdin.readline())

connections = [[0 for j in range(num+1)] for i in range(num+1)]

visited = [False for i in range(num+1)]

for _ in range(connections_num):
    a, b = map(int, sys.stdin.readline().split())
    connections[a][b] = 1
    connections[b][a] = 1

from collections import deque

dq = deque()
dq.appendleft(1)
while dq:
    node = dq.pop()
    visited[node] = True
    for i in range(1, num+1):
        if connections[node][i] == 1 and visited[i] == False:
            dq.appendleft(i)

count = 0
for i in visited:
    if i == True:
        count +=1
print(count -1) #시작점 빼기