def factorial(n):                                                       # 팩토리얼(계승0 함수 구현
    num = 1                                                             # 1부터 n까지의 자연수를 모두 곱한 값이다.
    for i in range(1, n+1):                                             # 1부터 n까지 반복문을 통해 곱해준다.
        num *= i
    return num


T = int(input())                                                        # 테스트 케이스 입력: T

for _ in range(T):
    n, m = map(int, input().split())                                    # M은 N보다 크거나 같다.
    bridge = factorial(m) // (factorial(n) * factorial(m - n))          # 이항 계수

    print(bridge)