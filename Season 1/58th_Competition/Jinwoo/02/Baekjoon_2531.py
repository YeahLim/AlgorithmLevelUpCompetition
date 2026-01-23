import sys
input = sys.stdin.readline

# N: 회전 초밥 벨트에 놓인 접시의 수
# d: 초밥의 가짓수
# k: 연속해서 먹는 접시의 수
# coupon_num: 쿠폰 번호
N, d, k, coupon_num = map(int, input().split())

sushi_list = [int(input()) for _ in range(N)]
# print(susi_list)

sushi_count = [0] * (d+1)   # 초밥 종류 딕셔너리
unique_count = 0            # 현재 다른 초밥의 개수
max_sushi = 0

# 초기 초밥 윈도우 설정
for i in range(k):
    sushi = sushi_list[i]

    # 현재 윈도우에 없는 초밥이라면 새로운 초밥 추가
    if sushi_count[sushi] == 0:
        unique_count += 1
    sushi_count[sushi] += 1

# 쿠폰 초밥 추가
if sushi_count[coupon_num] == 0:
    unique_count += 1
sushi_count[coupon_num] += 1

# 슬라이딩 윈도우 이동 시키며 최대값 갱신
for start in range(N):
    max_sushi  = max(max_sushi, unique_count)

    # 슬라이딩 윈도우에서 초밥 제거
    remove_sushi = sushi_list[start]
    if sushi_count[remove_sushi] == 1:
        unique_count -= 1
    sushi_count[remove_sushi] -= 1

    # 새로운 초밥 추가
    # 끝 인덱스가 초밥 배열 인덱스가 초가되는 경우가 있으므로
    # 접시의 수로 나눈 나머지 값을 통해 7번 끝에서 다음 0번 인덱스의 값을 탐색할 수 있도록 구현
    next_sushi = sushi_list[(start + k) % N]
    if sushi_count[next_sushi] == 0:
        unique_count += 1
    sushi_count[next_sushi] += 1

print(max_sushi)
