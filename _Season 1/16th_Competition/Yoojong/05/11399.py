import sys
n = int(sys.stdin.readline())
num = list(map(int, sys.stdin.readline().split()))
num.sort()

ans = [0 for _ in range(n)]
sum = 0
for i in range(n):
    sum += num[i]
    ans[i] = sum

sum = 0
for i in ans:
    sum += i
print(sum)
