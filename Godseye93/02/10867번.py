import sys

input = sys.stdin.readline

n = int(input())
lst = list(map(int,input().split()))

ans = sorted(set(lst))
print(*ans)