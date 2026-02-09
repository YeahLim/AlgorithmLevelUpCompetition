import sys
input = sys.stdin.readline

N, C = map(int, input().split())    # C: 공유기 설치 개수, N: 집의 개수
# print(N,C)

router = [int(input()) for i in range(N)]
router.sort()
# print(router)

start = 1
end = router[N - 1] - router[0]

while start <= end:
    # 공유기 간 거리
    mid = (start + end) // 2

    # 공유기 사이 거리를 측정할때 이전 값
    current_coordinate = router[0]
    cnt = 1

    # 현재 공유기 사이 거리로 최대 설치 횟수 구하기
    for i in range(1, len(router)):
        if router[i] >= current_coordinate + mid:
            cnt += 1
            current_coordinate = router[i]

    # 현재 거리로 설치한 공유기 수가 설치해야하는 공유기 수보다 클 경우, 거리를 넓혀야 함.
    if cnt >= C:
        start = mid + 1

    # 현재 거리로 설치한 공유기 수가 설치햐여 하는 공유기 수보다 작을 경우, 거리를 좁혀야 함.
    else:
        end = mid - 1
print(end)