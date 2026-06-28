def solution(n):
    if n == 0:
        return 0
    if n == 1:
        return 1

    a, b = 0, 1
    MOD = 1234567

    for _ in range(2, n + 1):
        a, b = b, (a + b) % MOD

    return b