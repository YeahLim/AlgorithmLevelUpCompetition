from typing import *
import sys

input = sys.stdin.readline


def is_jolly(n: int, numbers: List[int]) -> str:
    expected_diffs = [i for i in range(1, n)]
    actual_diffs = []

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])

        if diff not in actual_diffs:
            actual_diffs.append(diff)

    if sorted(actual_diffs) == expected_diffs:
        return 'Jolly'
    else:
        return 'Not jolly'


while True:
    try:
        inputs = list(map(int, input().split()))
        print(is_jolly(inputs[0], inputs[1:]))
    except:
        break
