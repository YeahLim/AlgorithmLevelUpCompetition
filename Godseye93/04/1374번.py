import sys
import heapq
input = sys.stdin.readline

N = int(input())
lectures = [list(map(int, input().split())) for _ in range(N)]
lectures.sort(key=lambda x: x[1])

min_heap = []
rooms = 0
for start, end, duration in lectures:
    while min_heap and min_heap[0] <= end:
        heapq.heappop(min_heap)
    heapq.heappush(min_heap, duration)
    rooms = max(rooms, len(min_heap))

print(rooms)