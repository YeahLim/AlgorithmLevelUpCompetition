import sys
input = sys.stdin.readline
n = int(input())

def numsum(n):
    num = str(n)
    a = 0
    for i in num:
        a += int(i)
    return a

ans = 0
for i in range(n):
    compareNum = i + numsum(i)
    if n == compareNum:
        ans = i
        break

print(ans)