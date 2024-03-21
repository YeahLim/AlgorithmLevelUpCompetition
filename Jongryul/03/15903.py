import sys
from heapq import heappush, heappop

input = sys.stdin.readline

n, m = map(int, input().split())
q = []
for i in list(map(int, input().split())):
    heappush(q, i)

for _ in range(m):
    a, b = heappop(q), heappop(q)
    heappush(q, a+b)
    heappush(q, a+b)
print(sum(q))