import sys
#상근이가 가지고 잇는 숫자 카드의 개수
n = int(sys.stdin.readline())
#숫자 카드에 적혀있는 정수
n_cards = set(map(int, sys.stdin.readline().split()))

#맞춰야할 정수의 개수
m = int(sys.stdin.readline())
m_cards = list(map(int,sys.stdin.readline().split()))

for i in m_cards:
    check_length = len(n_cards)
    n_cards.add(i)
    #다를 경우
    if check_length != len(n_cards):
        n_cards.remove(i)
        print(0 , end=' ')
    else:
        print(1, end=' ')
