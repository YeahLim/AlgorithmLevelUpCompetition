def solution(n):
    count = 0
    for k in range(2, n+1):
        if (2 * n) % k == 0:
            temp = (2 * n // k - k + 1)
            if temp % 2 == 0 and temp > 0:
                count += 1
    return count + 1