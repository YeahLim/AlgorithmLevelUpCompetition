import sys

N = int(input())                                                        # 수열의 크기: N

N_list = list(map(int, sys.stdin.readline().split()))                   # 수열 값 공백 기준으로 입력받기

X = int(input())                                                        # 만족할 수: X

cnt = 0                                                                 # 만족할 경우의 수를 세는 count 값
N_left = 0                                                              # 포인터 왼쪽 (시작 포인터)의 인덱스 값
N_right = N-1                                                           # 포인터 오른쪽 (끝 포인터)의 인덱스 값

#print(N_list)
N_list = sorted(N_list)                                                 # 값의 크기에 따라 포인터를 조절하기 위해 값 리스트를 정렬 해준다.
#print(N_list)

while N_left < N_right:                                                 # 오른쪽 포인터가 왼쪽 포인터보다 큰 경우만 반복함

    if N_list[N_left] + N_list[N_right] == X:                           # 두 포인터의 값의 합이 같다면 X 경우이 수에 맞는 경우 이므로 cnt값 +1
        cnt += 1
        N_left += 1

    elif N_list[N_left] + N_list[N_right] < X:                          # 두 포인터의 값의 합보다 X가 더 클 경우 합이 더 커져야 하므로 왼쪽 포인터 인덱스 값을 +1 해준다.
        N_left += 1

    else:                                                               # else인 두 포인터 값의 합보다 X가 더 작을 경우 합을 줄여줘야 하므로 오른쪽 포인터 인덱스 값을 -1 시켜준다.
        N_right -= 1

print(cnt)                                                              # 오른쪽 포인터가 왼쪽 포인터 보다 인덱스 값이 작아질 경우 모든 경우의 수를 확인해 본 것이므로 반복문을 종료한다.
