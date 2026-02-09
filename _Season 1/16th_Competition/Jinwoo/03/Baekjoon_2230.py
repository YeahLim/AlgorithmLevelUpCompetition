import sys

N, M = map(int, input().split())                                                # 배열의 총 갯수 N과 두 수 사이의 최솟값 M

N_list = []                                                                     # 배열값을 저장해둘 리스트

for i in range(N):                                                              # 배열의 총 갯수만큼
    N_list.append(int(input()))                                                 # 배열값을 입력받자

N_list = sorted(N_list)                                                         # 그리고 오름차순으로 정렬을 해준다.
#print(N_list)

left = 0                                                                        # 왼쪽(시작) 포인터
right = 0                                                                       # 오른쪽(끝) 포인터
min_result = sys.maxsize                                                        # 초기값 정수 최댓값 넣어주기

while left < N and right < N:                                                   # 두 포인터 N 미만일때까지 반복

    point = N_list[right] - N_list[left]                                        # 두 포인터의 차이값 저장

    if point >= M:                                                              # M 보다 크거나 같을 경우
        min_result = min(N_list[right] - N_list[left], min_result)              # 전의 결과값과 비교하여 최솟값을 최종 출력하는 변수에 저장
        left += 1                                                               # 다음 상황을 탐색하기 위해 왼쪽 포인터 1 증가

    else:                                                                       # M 미만일 경우
        right += 1                                                              # 조건에 부합하지 않으므로 오른쪽 포인터 1 증가

print(min_result)                                                               # 선별된 최솟값을 출력