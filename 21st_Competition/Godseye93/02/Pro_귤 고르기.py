from collections import Counter


def solution(k, tangerine):
    count = Counter(tangerine)

    freq = sorted(count.values(), reverse=True)

    total = 0
    types = 0

    for f in freq:
        total += f
        types += 1
        if total >= k:
            break

    return types