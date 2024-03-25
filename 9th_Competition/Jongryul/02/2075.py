from heapq import heappush, heappop

n = int(input())

q = []

for _ in range(n):
    lst = list(map(int, input().split()))
    for i in lst:
        if len(q) < n:
            heappush(q, i)
        else:
            if i > q[0]:
                heappop(q)
                heappush(q, i)
print(q[0])