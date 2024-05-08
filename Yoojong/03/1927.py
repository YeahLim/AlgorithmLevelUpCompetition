#실2, 최소힙
import sys
import heapq

n = int(sys.stdin.readline())
q = []

for _ in range(n):
    num = int(sys.stdin.readline())
    if num == 0 and len(q) == 0:
        print(0)
    elif num ==0:
      print(heapq.heappop(q))
    else:
        heapq.heappush(q, num)