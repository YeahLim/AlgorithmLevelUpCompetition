import sys

N, S = map(int, input().split())                                                # N개의 자연수: N, 연속된 수들의 부분합: S

N_list = list(map(int, sys.stdin.readline().split()))                           # N개의 자연수로 이루어진 수열값 입력받기
#print(N_list)

left = 0
right = 0
length = 100001                                                                # N_list 길이의 최대값
sum_N = 0

while True:

    if sum_N >= S:                                                                 # S값보다 두 수의 사이의 합이 같거나 클경우
        if length > (right - left):
            #print("***** 최소 길이 변함:", right - left, "****")
            #print("현재 포인터 위치 | left:", left, ", right:", right)
            length = right - left
        sum_N -= N_list[left]
        left += 1

    elif right == N:                                                            # 오른쪽 포인터가 배열의 끝에 다다르면 S 이상인 가장 짧은 길이의 모든 경우를 둘러본 것이므로
        #print("break | left:", left, ", right:", right)
        break                                                                   # break를 써서 반복문을 종료시킨다.

    else:                                                                       # 합이 S보다 작을 경우엔
        sum_N += N_list[right]
        right += 1                                                              # 우측 포인터를 1 늘려 합을 늘려준다.

if length != 100001:
    print(length)
else:
    print(0)
