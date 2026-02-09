import sys
import math

input = sys.stdin.readline

n = int(input())


Opinions = []

if n == 0:
    print(0)
else:
    for i in range(n):
        Opinion = int(input())
        Opinions.append(Opinion)

    Opinions.sort()

    Cut = math.floor(n * (15/100) + 0.5)

    if Cut > 0:
        del Opinions[:Cut]
        del Opinions[-Cut:]

    Grade = math.floor((sum(Opinions) / len(Opinions) + 0.5))
    print(Grade)