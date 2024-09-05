def hanoi(n, start, end, via):
    if n == 1:                                      # 원판이 1개일 때는 바로 목표 장대로 이동
        print(start, end)                           # 이동 경로 출력
        return

    hanoi(n - 1, start, via, end)                   # n-1개의 원판을 시작 장대에서 보조 장대로 이동
    print(start, end)                               # 가장 큰 원판을 목표 장대로 이동
    hanoi(n - 1, via, end, start)                   # 나머지 n-1개의 원판을 보조 장대에서 목표 장대로 이동

n = int(input())                                    # 입력

# 옮긴 횟수는 2^n - 1로 계산 (하노이의 탑 최소 이동 횟수 공식)
print(2**n - 1)

# 하노이 함수 호출 (첫 번째 장대: 1, 세 번째 장대: 3, 두 번째 장대: 2)
hanoi(n, 1, 3, 2)
