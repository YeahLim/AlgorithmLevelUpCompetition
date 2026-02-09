import sys
import heapq

input = sys.stdin.readline
n = int(input())

gift_heap = []

for _ in range(n):
    data = list(map(int, input().split()))
    a = data[0]

    if a == 0:
        if gift_heap:
            # 가장 가치 큰 선물 pop (음수이므로 -1 곱해줌)
            print(-heapq.heappop(gift_heap))
        else:
            print(-1)
    else:
        for value in data[1:]:
            heapq.heappush(gift_heap, -value)  # 최대 힙처럼 사용
