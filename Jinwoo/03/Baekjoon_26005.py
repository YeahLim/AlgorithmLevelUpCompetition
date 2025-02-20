import sys
input = sys.stdin.readline

N = int(input().strip())

if N == 1:
    print(0)
else:
    ans = (N * N) // 2  # 비트 연산자 대신 정수 나눗셈 사용
    if N % 2 == 1:  # 홀수 판별
        ans += 1
    print(ans)