import sys
input = sys.stdin.readline

tree, get_tree = map(int, input().split())      # 나무 개수, 얻어가야 하는 나무
heights = list(map(int, input().split()))       # 나무 높이 리스트

# 이분 탐색 초기 설정
low, high = 0, max(heights)

# 이분 탐색 실행
while low <= high:
    mid = (low + high) // 2     # 절단기 높이 중간값 = mid
    wood = 0                    # 잘라서 얻을 나무 길이

    # mid 높이로 잘랐을 때 얻을 수 있는 나무의 길이 계산
    for height in heights:
        if height > mid:        # mid 높이보다 나무길이가 클 때만 나무길이 계산
            wood += height - mid

    # 얻은 나무의 길이가 목표 이상인 경우 mid기준 우측(높은 쪽)으로 이분탐색
    if wood >= get_tree:
        low = mid + 1
    # 얻은 나무의 길이가 목표 미만인 경우 mid기준 좌측(낮은 쪽)으로 이분 탐색
    else:
        high = mid - 1

print(high)
