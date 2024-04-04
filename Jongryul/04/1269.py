import sys
input = sys.stdin.readline

n, m = map(int, input().split())
a = set(map(int, input().split()))
b = set(map(int, input().split()))

cnt = n + m

for i in a:
    if i in b:
        cnt -= 2
print(cnt)