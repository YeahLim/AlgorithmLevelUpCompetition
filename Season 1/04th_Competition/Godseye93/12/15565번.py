import sys

input = sys.stdin.readline

n, k =map(int,input().split())
dolls = list(map(int,input().split()))

arr = []

for i in range(len(dolls)):
    if dolls[i] == 1:
        arr.append(i)

if len(arr) < k:
    print(-1)
    exit(0)

start = 0
end = k - 1
res = 10**6+1

while end < len(arr):
    length = arr[end] - arr[start] + 1
    res = min(length, res)
    start += 1
    end += 1

print(res)