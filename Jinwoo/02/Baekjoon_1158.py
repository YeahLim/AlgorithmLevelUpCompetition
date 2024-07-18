N, K = map(int, input().split())                                        # 원을 그리며 앉는 사람: N, K 번째사람 제거

#print(N, K)

N_arr = [i for i in range(1, N + 1)]                                    # 맨 처음에 원에 앉아있는 사람들
#print(N_arr)

answer = []                                                             # 제거된 사람들을 넣을 배열
num = 0                                                                 # 제거될 사람의 인덱스 번호

for t in range(N):
    num += K - 1                                                        # K번째 인덱스 찾기
    if num >= len(N_arr):                                               # 한바퀴를 돌고 그 다음으로 돌아올 때를 대비해 값을 나머지로 바꿈
        num = num % len(N_arr)

    answer.append(str(N_arr.pop(num)))

# answer 배열에서 출력
print("<", end='')
for i in answer:
    if answer[N-1] == i:
        print(i + ">")
    else:
        print(i +",", end=' ')
