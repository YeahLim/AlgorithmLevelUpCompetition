from math import gcd


def solution(arr):
    def lcm(a, b):
        return a * b // gcd(a, b)

    answer = arr[0]
    for num in arr[1:]:
        answer = lcm(answer, num)
    return answer