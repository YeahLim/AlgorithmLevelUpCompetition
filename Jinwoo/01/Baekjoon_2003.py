import sys

N, M = map(int, sys.stdin.readline().split())  # N개로된 수열, 수열의 합이 될 경우의 수 M

number = list(map(int, sys.stdin.readline().split()))  # 수열값 입력받아 리스트로 저장

start_point = 0  # 시작값 인덱스 포인트
end_point = 1  # 끝 값 인덱스 포인트
count = 0  # 배열 범위의 합이 M과 같을 경우 +1 할 count 값

while end_point <= N and start_point <= end_point:  # 조건이 될때까지 반복
    sum_number = number[start_point: end_point]  # 시작포인트부터 끝포인트까지의 누적합
    total = sum(sum_number)  # 범위 내 값들을 누적합 시킨다.

    # 시간 복잡도 : 범위에 따라 합하는 수가 달라짐 최대 범위일 경우 10,000이 되겠지만 1개의 인덱스만 합할때도 있음

    if total == M:  # 범위 내 누적합 값이 M과 같을 때
        count += 1  # count를 증가시킨 후
        end_point += 1  # 끝 포인트 이동

    elif total < M:  # M보다 작다면
        end_point += 1  # 끝포인터 범위 1 증가

    else:  # 크다면 범위를 줄여야 하므로
        start_point += 1  # 시작 포인트 1 증가

print(count)