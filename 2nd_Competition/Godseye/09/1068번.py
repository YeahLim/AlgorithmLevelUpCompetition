import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int,input().split()))
m = int(input())

def dfs(num, arr):
    arr[num] = -2
    for i in range(len(arr)):
        if num == arr[i]:
            dfs(i, arr)

cnt = 0
dfs(m,arr)

for i in range(len(arr)):
    if arr[i] != -2 and i not in arr:
        cnt += 1
print(cnt)