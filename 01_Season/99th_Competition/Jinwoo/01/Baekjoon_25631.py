import sys
input = sys.stdin.readline

N = int(input())
arr = list(map(int, input().split()))

count = {}
for x in arr:
    count[x] = count.get(x, 0) + 1

print(max(count.values()))
