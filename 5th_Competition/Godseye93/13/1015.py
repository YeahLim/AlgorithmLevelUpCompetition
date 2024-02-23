import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int,input().split()))
sortedArr = sorted(arr, reverse=False)

ans = []
for i in range(n):
    ans.append(sortedArr.index(arr[i]))
    sortedArr[sortedArr.index(arr[i])] = -1

print(*ans)