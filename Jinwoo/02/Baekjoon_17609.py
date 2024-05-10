import sys

T = int(input())                                                                # 문자열을 입력받을 횟수 T

for i in range(T):

    T_list = list(sys.stdin.readline().strip())                                 # 문자열 값 입력
    #print(T_list)
    #print(len(T_list))

    left_p = 0
    right_p = len(T_list) - 1
    result = 0                                                                  # 출력할 결과 값 (회문이 맞으면 0을 출력)

    for i in range(len(T_list)):                                                # 반복할 수 있는 최대값
        if left_p >= right_p:                                                   # 두 포인터가 만난다면 반복문 멈추기
            break

        if T_list[left_p] == T_list[right_p]:                                   # 두 포인터 값이 같으면 회문이 맞으므로
            left_p += 1                                                         # 양쪽 포인터를 하나씩 당겨주자
            right_p -= 1
            continue

                                                                           # 두 포인터의 현재 값이 같지 않을 경우이다.
        if T_list[left_p] == T_list[right_p -1]:                            # 만일 오른쪽 포인터를 하나 뺀 값이 같을 경우
            T_check = T_list[left_p:right_p]                                # 현재 두 포인터 범위의 문자열 리스트 값을 복사하여 T_check에 넣어준 후

            if T_check[:] == T_check[::-1]:                                 # 오른쪽 포인터 값을 뺀 리스트를 반전시킨값과 같으면
                result = 1                                                  # 유사회문이므로 1 출력
                break                                                       # 그 후 반복문 나가기

        if T_list[left_p+1] == T_list[right_p]:                           # 왼쪽 포인터 값을 뺐을때 같을 경우
            T_check = T_list[left_p+1:right_p+1]                            # 현재 포인터 값들을 슬라이스 하여 T_check에 담아줌
            if T_check[:] == T_check[::-1]:                                 # T_check를 반전시켜 비교하여 같다면
                result = 1                                                  # 유사 회문이므로 result에 1값을 담아준다.
                break

                                                                       # 만일 위 조건에 전부 해당하지 않을 경우
        result = 2                                                      # 회문이 아니므로 2를 result에 담는다.
        break

    print(result)                                                               # 결과값 출력