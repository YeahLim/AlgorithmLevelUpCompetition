import sys
input = sys.stdin.readline

N = int(input())
votes = [int(input()) for _ in range(N)]

dasom = votes[0]
others = votes[1:]
cnt = 0

# 만약 후보가 1명이라면 매수할 필요 없음
if N == 1:
    print(0)
else:
    while others and max(others) >= dasom:
        # 가장 많은 표를 가진 후보의 표를 하나 깎고 다솜이에게 줌
        max_index = others.index(max(others))
        others[max_index] -= 1
        dasom += 1
        cnt += 1
    print(cnt)
