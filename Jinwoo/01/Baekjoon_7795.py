import sys

T = int(input())                                                                    # 테스트 케이스 수 T

for i in range(T):                                                                  # 테스트 케이스 만큼 반복

    N, M = map(int, input().split())                                                # 생명체 A의 갯수 : N, 생명체 B의 갯수 : M

    N_list = list(map(int, sys.stdin.readline().split()))                           # A의 값 N만큼 입력 받기
    M_list = list(map(int, sys.stdin.readline().split()))                           # B의 값 M만큼 입력 받기

    N_list = sorted(N_list)
    M_list = sorted(M_list)                                                         # 입력받은 값의 리스트를 오름차순 정렬

    n_point = 0
    m_point = 0                                                                     # A와 B의 포인터 값 선언
    count = 0                                                                       # A의 크기가 B보다 큰 쌍이 있는 경우를 셀 count 값

    while M-1 >= m_point and N-1 >= n_point:                                         # B의 포인터 값이 M-1보다 작을때 까지 반복
        #print("-------------------")
        #print("A 리스트값:", N_list[n_point], "B 리스트값:", M_list[m_point])
        if N_list[n_point] > M_list[m_point]:                                       # 오름차순으로 정렬된 A와 B의 현재값을 비교하였을때 A가 더 클경우
            count += N - n_point                                                    # 정답 범위 안에 해당 되는 경우이므로 count를 +1 해줘야 한다. 오름차순으로 정렬된 상태 이므로 현재 n_point 값 이후의 값들도 모두 더해줘야 하므로 M-n_point 만큼 count를 더해준다.
            #print(n_point, m_point)
            #print("카운트 추가됨", N - n_point, "현재 count 값",count)
            m_point += 1                                                            # 그리고 B의 현재 인덱스 값을 1 추가 시켜준다.

        elif N_list[n_point] <= M_list[m_point]:                                    # 오름차순으로 정렬된 A와 B의 현재값을 비교하였을때 B 값이 더 큰 경우이다.
            #print(n_point, m_point)
            n_point += 1                                                            # 이 경우 찾는 범위가 아니므로 A의 인덱스 값을 1 증가 시켜 다음 수와 비교시킨다.

    print(count)
    #print("8888888888888888888888888888888888") # 한 사이클 끝남

    '''while문 시간복잡도는 최대 20,000(N, M의 최댓값) * k 이다.
    왜냐하면 while문은 두 포인터중 하나가 끝에 도달하면 끝나기 때문.'''