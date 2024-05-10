import sys

input = sys.stdin.readline

n = int(input().strip())

tasks = []
for _ in range(n):
    Ti, Si = map(int, input().split())
    tasks.append([Ti, Si])

tasks.sort(key=lambda x: x[1], reverse=True)

ans = tasks[0][1] - tasks[0][0]

for i in range(1, n):
    if ans > tasks[i][1]:
        ans = tasks[i][1] - tasks[i][0]
    else:
        ans -= tasks[i][0]

if ans >= 0:
    print(ans)
else:
    print(-1)
