import sys

input = sys.stdin.readline

n, k = map(int, input().split())

arr = [i for i in range(1, n + 1)]
ans = []
num = 0

while arr:
    num += k - 1
    if num >= len(arr):
        num %= len(arr)

    ans.append(arr.pop(num))

print("<" + ", ".join(str(i) for i in ans) + ">")
