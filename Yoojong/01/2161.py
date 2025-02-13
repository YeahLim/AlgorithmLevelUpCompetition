# 카드1 2161 실 5

import sys


if __name__ == '__main__':
    n = int(sys.stdin.readline())
    cards = [i for i in range(1, n+1)]
    ans = []

    while len(cards) > 1:
        first = cards[0]
        second = cards[1]
        ans.append(first)
        del(cards[:2])
        cards.append(second)

    ans.extend(cards)
    for i in ans:
        print(i, end=' ')
