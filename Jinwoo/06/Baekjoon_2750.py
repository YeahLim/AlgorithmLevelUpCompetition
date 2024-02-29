N = int(input())                                                    # 줄 갯수 입력

num = []                                                            # 입력받는 숫자 정보를 입력받을 리스트

for i in range(N):                                                  # for문을 통해 N만큼
    num.append(int(input()))                                        # 입력받은 수를 num 리스트에 추가

num_len = len(num)                                                  # 입력받은 숫자 리스트의 길이 (리스트 안의 숫자 크기를 리스트 길이만큼 반복하여 비교하기 위함)

for i in range(num_len):                                            # for문을 통해
    print(num[num.index(min(num))])                                 # num 리스트의 가장 작은 정수를 출력한 후
    del num[num.index(min(num))]                                    # 출력한 가장 작은 숫자를 리스트에서 삭제시킨다.
