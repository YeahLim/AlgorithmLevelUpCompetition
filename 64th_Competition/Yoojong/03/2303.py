from itertools import combinations
import sys
n = int(sys.stdin.readline())
arr = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
ans = 0
ans_max = 0
for i in range(n):
    combi = list(combinations(arr[i], 3))
    temp = 0
    for j in combi:
        temp = max(temp, sum(j) % 10)
    if temp >= ans_max:
        ans = i + 1
        ans_max = temp
print(ans)