import sys

N, M = map(int, input().split())                                                # 연병장 크기: N, 조교 수(명령 수): M

ground = list(map(int, sys.stdin.readline().split()))                           # 연병장 초기 값, N 만큼 입력받음

cnt = [0 for i in range(N+1)]                                                     # 명령들의 누적합 리스트

#print(cnt)

for i in range(M):
    a, b, k = map(int, sys.stdin.readline().split())                            # 연병장의 a ~ b 까지의 범위에 k만큼 값을 더해라

    cnt[a-1] += k                                                               # 범위의 시작 a 의 값 리스트에 누적합 해주기
    cnt[b] -= k                                                                 # 범위의 끝 b의 값 리스트에 누적합 해주기
# 시간 복잡도 O(N)
#print(cnt)

order = 0                                                                       # 범위의 시작과 끝의 누적합에서 수행할 명령값을 담을 변수
for i in range(N):                                                              # 범위의 누적합 리스트에서 변한 값을 각각의 인덱스 값에 더해 적용시키면
                                                                                # 결과적으로 조교가 명령한 만큼의 연병장 값이 나옴
    order += cnt[i]                                                             # 누적합 한 결과값을 보고 땅을 파야할지 흙으로 메꿔야 할지 알 수 있음
    print(ground[i] + order, end=" ")                                            # order값을 각각의 인덱스 값에 더해준 후 출력

# 시간 복잡도 O(N)