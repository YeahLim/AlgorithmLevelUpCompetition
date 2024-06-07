import sys

N, H = map(int, sys.stdin.readline().split())                                           # 장애물 갯수: N, 높이: H

top = [0] * (H+1)                                                                       # 종유석 리스트
bot = [0] * (H+1)                                                                       # 석순 리스트

for i in range(N):                                                                      # 이분 탐색을 위해 종유석과 석순의 높이값 따로 분류, 인덱스를 1씩 증가시켜주자
    if i%2 == 0:                                                                        # 인덱스값이 짝수일땐 석순
        bot[int(sys.stdin.readline())] += 1
    else:                                                                               # 인덱스 값이 홀수일땐 종유석
        top[int(sys.stdin.readline())] += 1


for i in range(H - 1, 0, -1):                                                           # 장애물 종유석과 석순값 리스트를 누적합 해주자
    bot[i] += bot[i + 1]
    top[i] += top[i + 1]

cnt_min = N                                                                             # 파괴해야할 장애물의 최솟값 저장 변수
range_of_min = 0                                                                        # 최솟값 구간의 갯수

for i in range(1, H + 1):                                                               # 구간별로 장애물의 갯수를 파악하여 파괴해야할 장애물의 최솟값과 최솟값 구간의 갯수를 구할 수 있다.

    if cnt_min > (bot[i] + top[H - i + 1]):                                             # 현재 구간의 석순과 종유석의 장애물을 합친 최솟값이 전 최솟값 cnt_min보다 작다면
        cnt_min = (bot[i] + top[H - i + 1])                                             # 현재 구간의 최솟값을 넣어준 후
        range_of_min = 1                                                                # 최솟값 구간의 갯수를 1로 초기화

    elif cnt_min == (bot[i] + top[H - i + 1]):                                          # 현재 구간의 장애물 값과 cnt_min이 같다면
        range_of_min += 1                                                               # cnt만 +1 해주자.

print(cnt_min, range_of_min)                                                            # 전체 구간을 살펴본 cnt_min과 최솟값 범위를 출력해주자.

