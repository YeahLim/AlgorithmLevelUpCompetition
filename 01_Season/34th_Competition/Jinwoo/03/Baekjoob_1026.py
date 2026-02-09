N = int(input())                        # 배열의 크기
A = list(map(int, input().split()))     # 배열 A
B = list(map(int, input().split()))     # 배열 B

# 배열 A는 오름차순 정렬 (작은 값을 먼저 사용)
A.sort()

# 배열 B는 내림차순 정렬 (큰 값을 먼저 사용)
B.sort(reverse=True)

# S 값을 계산 (A[i] * B[i]의 합)
S = 0
for i in range(N):
    S += A[i] * B[i]

# 결과 출력
print(S)
