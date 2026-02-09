import sys
import heapq
input = sys.stdin.readline

N = int(input())        # 연산의 개수
heap = []

for i in range(N):
    x = int(input())    # 연산에 대한 정보 입력

    # 0이 아닐 경우 힙에 삽입
    if x != 0:
        heapq.heappush(heap, x)

    # 0일 경우 최소 힙 출력
    else:
        # 출력 후 배열에서 제거
        try:
            print(heapq.heappop(heap))
        except:
            print(0)