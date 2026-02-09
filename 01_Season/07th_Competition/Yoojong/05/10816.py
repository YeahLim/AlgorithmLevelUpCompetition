import sys

n = int(sys.stdin.readline())
cards = list(map(int, sys.stdin.readline().split()))
m = int(sys.stdin.readline())
ask = list(map(int, sys.stdin.readline().split()))

cards_dic = {}
for i in cards:
    if i not in cards_dic.keys():
        cards_dic[i] = 1
    else:
        cards_dic[i] += 1
for i in ask:
    if i not in cards_dic.keys():
        print(0, end =' ')
    else:
        print(cards_dic[i], end =' ')
