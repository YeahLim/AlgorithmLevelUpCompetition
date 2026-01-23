N = int(input())                                                        # 자연수 N (1 <= N <= 10,000,000)
N_sum = 0


start_point = 0                                                         # 시작 포인터
end_point = 0                                                           # 끝 포인터
cnt = 0
temp = 0

while start_point < N:

    if temp < N:
        temp += end_point +1
        end_point += 1


    elif temp > N:
        temp -= start_point +1
        start_point += 1

    else:
        cnt += 1
        #print("------------------")
        #print("** cnt 값 증가 [", cnt, "] **")
        #print("start: ", start_point, ", end: ", end_point)

        temp -= start_point +1
        start_point += 1
print(cnt)
