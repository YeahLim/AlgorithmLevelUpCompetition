import sys
input = sys.stdin.readline

n, new_score, p = map(int, input().split())
scores = list(map(int, input().split())) if n > 0 else []

rank = 1
for s in scores:
    if s > new_score:
        rank += 1
    else:
        break

if n == p and (n == 0 or scores[-1] >= new_score):
    print(-1)
else:
    print(rank)