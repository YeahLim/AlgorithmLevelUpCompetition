import sys
input = sys.stdin.readline

n = int(input())
days = list(map(int, input().split()))

days.sort(reverse=True)  # 가장 오래 걸리는 나무부터 먼저 심기

max_days = days[0]  # 첫 번째 나무가 자라는데 걸리는 시간 + 0일차에 심음

if n == 1:
    print(n + 2)  # 1일(구입 및 심기) + grow(1그루) + 1일(이장 초대)
else:
    for i in range(1, n):
        if max_days < (i + days[i]):
            max_days = i + days[i]

    result = max_days + 2  # 가장 늦게 자란 나무 + 심기 시작일(1) + 초대일(1)
    print(result)
