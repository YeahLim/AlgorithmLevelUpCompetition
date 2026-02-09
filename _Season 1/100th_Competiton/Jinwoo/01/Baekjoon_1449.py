import sys
input = sys.stdin.readline

N, L = map(int, input().split())
leaks = list(map(int, input().split()))

leaks.sort()

cnt = 1
cover_end = leaks[0] - 0.5 + L

for x in leaks[1:]:
    if x + 0.5 > cover_end:
        cnt += 1
        cover_end = x - 0.5 + L

print(cnt)
