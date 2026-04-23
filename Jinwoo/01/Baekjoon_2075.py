import sys
import heapq

input = sys.stdin.readline

N = int(input())
heap = []

for _ in range(N):
    numbers = list(map(int, input().split()))

    for num in numbers:
        if len(heap) < N:
            heapq.heappush(heap, num)
        else:
            if num > heap[0]:
                heapq.heappushpop(heap, num)

print(heap[0])