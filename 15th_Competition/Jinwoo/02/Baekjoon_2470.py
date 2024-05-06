import sys

N = int(input())                                                                # 입력받을 전체 용액의 수

liq_list = list(map(int, sys.stdin.readline().split()))                         # 용액의 특성값 입력
#print(liq_list)

liq_list = sorted(liq_list)                                                     # 용액의 특성값 오름차순 정렬
#print(liq_list)

start_point = 0                                                                 # 시작 포인터
end_point = N-1                                                                 # 끝 포인터

result_liq = abs(liq_list[start_point] + liq_list[end_point])                   # 리스트 양쪽 끝 값을 더한 절댓값 (제일 산성값과, 제일 염기성인 값)

result = [liq_list[start_point], liq_list[end_point]]                           # 0에 근접하는 값을 찾았을 때의 값을 출력하기 위한 결과 값 리스트

while start_point < end_point:                                                  # start와 end 포인터가 만날때 까지 반복문을 돌린다.
    liq_start = liq_list[start_point]
    liq_end = liq_list[end_point]

    sum_liq = liq_start + liq_end                                               # 각 포인터의 용액값의 합

    if abs(sum_liq) < result_liq:                                               # 현재 용액값의 합이 전 용액값의 합보다 작을 경우
        result_liq = abs(sum_liq)                                               # 전 용액값
        result = [liq_start, liq_end]

        if result_liq == 0:                                                     # 합이 0일경우 더이상 다른 경우를 계산할 필요가 없으므로 break
            break

    if sum_liq < 0:                                                             # 용액값의 합이 양수일 경우
        start_point += 1                                                        # 시작값 인덱스를 1 증가

    else:                                                                       # 음수일 경우
        end_point -= 1                                                          # 끝값 인덱스를 1 감소

print(result[0], result[1])                                                     # 용앵값의 합이 0에 제일 근접한 값 출력