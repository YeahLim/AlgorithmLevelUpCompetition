T = int(input())                                            # 테스트 케이스

for i in range(T):                                          # 테스트 케이스 만큼 반복
    N = int(input())                                        # N번째 피보나치수 구하기
    zero, one = 1, 0                                        # 0과 1이 호출된 횟수

    for j in range(N):                                      # N만큼 피보나치수 식 반복
        zero, one = one, zero + one                         # 0은 전의 1값이 올라옴, 1은 전의 0값 + 1값
# N의 최대값이 40이므로 각 테스트 케이스 상수시간 O(40)으로 간주할 수 있음
# 따라서 시간복잡도는 O(N)

    print(zero, one)