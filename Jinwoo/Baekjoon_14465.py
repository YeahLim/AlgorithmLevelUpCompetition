N, K, B = map(int, input().split())     # 입력

broken = [0] * (N + 1)      # 고장난 신호등 번호를 기록할 리스트


# 고장난 신호등 번호 입력 받기
for _ in range(B):
    idx = int(input())
    broken[idx] = 1  # 고장난 신호등을 표시 (1로 표시)
# 시간 복잡도 O(B)

# 슬라이딩 윈도우로 최소 수리 횟수 구하기
current_broken = sum(broken[1:K+1])  # 첫 K개의 신호등 중 고장난 신호등의 개수
min_repairs = current_broken  # 최소 수리 횟수 초기화

# 윈도우를 이동하면서 고장난 신호등의 수를 업데이트
for i in range(2, N - K + 2):
    current_broken = current_broken - broken[i - 1] + broken[i + K - 1]
    min_repairs = min(min_repairs, current_broken)
# 시간 복잡도 O(N)

print(min_repairs)
