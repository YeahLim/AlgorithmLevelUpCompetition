N = int(input())                                                            # 입력받을 숫자 갯수: N

N_list = []                                                                 # 숫자값 리스트
for i in range(N):
    X = int(input())                                                        # 입력받은 순서대로 숫자갑 리스트에 넣어준다.
    N_list.append(X)
#print(N_list)

N_list.sort()                                                               # 숫자값 정렬
#print(N_list)

temp = []
for i in range(N):                                                          # 입력된 숫자만큼 반복
    cnt = 0

    for j in range(N_list[i], N_list[i]+5):                                 # 리스트의 현재 값에서 5번 연속되는 숫자를 확인
        if j not in N_list:                                                 # 그 숫자가 없다면
            cnt += 1                                                        # count 1 증가
    temp.append(cnt)                                                        # cnt값을 temp리스트에 넣어준다.

print(min(temp))                                                            # temp의 최솟값을 출력, 추가되어야할 최소 원수 갯수를 구할 수 있다.