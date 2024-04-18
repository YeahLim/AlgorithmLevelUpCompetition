num = int(input())                                                              # 1000 이하의 랜덤한 숫자를 입력 받는다.

cnt_hansu = 0                                                                   # 한수를 count할 변수를 선언해준다.

for i in range(1, num+1):                                                       # 1부터 입력받은 숫자까지 스캔
    num_list = list(map(int, str(i)))                                           # 현재의 숫자의 자릿수를 리스트로 만든다.

    #print(num_list)

    if i < 100:                                                                 # 100보다 작으면 모두 한수
        cnt_hansu += 1                                                          # cnt를 1 올려준다.

    elif num_list[0]-num_list[1] == num_list[1]-num_list[2]:                    # 각 자리수가 등차수열이면 한수
        cnt_hansu += 1                                                          # 한수일 경우 cnt를 1 올려준다.

print(cnt_hansu)