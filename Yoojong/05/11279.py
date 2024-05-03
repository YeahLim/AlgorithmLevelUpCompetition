#최대 힙 실2
import heapq
import sys
n = int(sys.stdin.readline())
heap =[]

for _ in range(n):
    x = int(sys.stdin.readline())
    if x == 0 and  len(heap)== 0:
        print(0)
    elif x ==0:
        print(-heapq.heappop(heap))

    else:
        heapq.heappush(heap, -x)

