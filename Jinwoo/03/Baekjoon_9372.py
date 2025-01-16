import sys
input = sys.stdin.readline

T = int(input().strip())

for _ in range(T):
    # 국가 개수(N), 비행기 개수(M)
    N, M = map(int, input().split())

    # 비행기 경로 입력
    for _ in range(M):
        a, b = map(int, input().split())  # 비행기 노선 입력 (사용하지 않아도 됨)

    # MST의 최소 간선 개수는 항상 N-1개
    print(N - 1)
