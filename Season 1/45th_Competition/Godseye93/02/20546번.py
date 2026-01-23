import sys

input = sys.stdin.readline

money = int(input())

p = list(map(int, input().split()))
p.insert(0, 0)

down = 0
up = 0
june = money
min_ = money
june_cnt = 0
min_cnt = 0

for i in range(1, 14):
    j_buy = june // p[i]
    if j_buy > 0:
        june -= (j_buy * p[i])
        june_cnt = j_buy

    if i != 1:
        if p[i - 1] > p[i]:
            down += 1
            up = 0
        elif p[i - 1] < p[i]:
            down = 0
            up += 1

    if down == 3:
        m_buy = min_ // p[i]
        if m_buy > 0:
            min_ -= (m_buy * p[i])
            min_cnt = m_buy
    if up == 3:
        min_ += (min_cnt * p[i])
        min_cnt = 0

june_total = june + june_cnt * p[14]
min_total = min_ + min_cnt * p[14]

if june_total > min_total:
    print('BNP')
elif june_total < min_total:
    print('TIMING')
else:
    print('SAMESAME')
