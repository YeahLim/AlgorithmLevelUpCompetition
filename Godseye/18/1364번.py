import sys

input = sys.stdin.readline

n = int(input())


def main(n):
    answer = 1
    x = 1

    for i in range(2, n + 1):
        if i % 6 == 0:
            x += 1
        if i % 6 == 1:
            answer -= 1
        answer += x

    return answer


print(main(n))
